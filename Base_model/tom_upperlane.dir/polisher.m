begin P_Loading arriving procedure
    while 1=1 begin
        move into Q_Fixture
        if Q_LoadingProduct current >0 then
        	order 1 load from OL_FixtureAvailable to continue
        wait to be ordered on OL_FixtureLoad
        move into Q_LoadingFixture
        wait to be ordered on OL_FixtureMayEnterPolisher
        move into Q_FixtureInPolisher
        wait to be ordered on OL_FixtureUnload
       	move into Q_FixtureUnloading
        wait to be ordered on OL_FixtureToConveyor
        move into Q_Conveyor
        wait for VI_FixtureTravelTime min
    end
end

begin P_Polisher arriving procedure
    if this load type = L_Product40 then 
    	begin
        	move into Q_Buffer40
        	set AI_PolisherIndex = 1
        end
    else if this load type = L_Product46 then
        begin
	        move into Q_Buffer46 
	        //Choose Polisher 2 if available or if all machines are occuppied.
	        //Otherwise choose one of 1 or 3 with shortest queue (if both available it picks randomly).
	        if Q_Polisher(2) remaining space > 0 then
	            set AI_PolisherIndex = 2
	        else if Q_Polisher(1) remaining space = 0 and Q_Polisher(2) remaining space = 0 and Q_Polisher(3) remaining space = 0 then
	            set AI_PolisherIndex = 2
	        else
	        	begin
		            choose a queue from among Q_Polisher(1), Q_Polisher(3)
		                whose current loads is minimum
		                save choice as A_QptrPolisher
		            set AI_PolisherIndex = A_QptrPolisher index
	            end
        end
    else if this load type = L_Product49 then 
    	begin
	        move into Q_Buffer49
	        set AI_PolisherIndex = 3
        end
    

    if Q_LoadingProduct remaining space < 1 then
    	wait to be ordered on OL_ProductLoad
    
    move into Q_LoadingProduct
    
    if Q_Fixture current = 0 then
    	wait to be ordered on OL_FixtureAvailable
    	
    order 1 load from OL_FixtureLoad to continue
    wait for VI_LoadingTime sec
    
    move into Q_Polisher(AI_PolisherIndex)
    order 1 load from OL_FixtureMayEnterPolisher to continue
    
    order 1 load from OL_ProductLoad to continue
    
    use R_Polisher(AI_PolisherIndex) for VI_CycleTimePolisher(AI_PolisherIndex) sec
	move into Q_Unloading
	order 1 load from OL_FixtureUnload to continue
    wait for VI_LoadingTime sec
    order 1 load from OL_FixtureToConveyor to continue

    move into Q_Buffer3    
    send to P_SurfaceTreatment
end


