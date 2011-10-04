; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; Armor.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------ "SEE!" = The codes have been adapted/converted from the obsolete Beta 4.7 WiP...
; NOTE: Keep this organized!

;------------------------------------------------------------------------------- SEE!
Armor WildFortressArmor
	Armor = DEFAULT				20% 		;this sets the level for all nonspecified damage types
	Armor = CRUSH				5%  		;horseman damage
	Armor = SLASH				10% 		;soldier damage
  Armor = CAVALRY	  			10%
	Armor = URUK				15%    
	Armor = SPECIALIST			15% 
	Armor = PIERCE				0% 		;archer damage
	Armor = FLAME				5%			;fire damage
	Armor = LOGICAL_FIRE			5%			;fire logic
	Armor = SIEGE				125%		;siege damage
	Armor = STRUCTURAL			0%			;structural damage (from structure arrows)  
	Armor = HERO				10%		;Hero damage  
	Armor = HERO_RANGED		5%			;Hero bow damage
	Armor = LOGICAL_FIRE	 		5%
End
;------------------------------------------------------------------------------- SEE!
Armor WildFortressExpansionArmor
	Armor = DEFAULT				40%    //this sets the level for all nonspecified damage types
	Armor = CRUSH				10% ;50    //horseman damage
	Armor = SLASH				20%	//soldier damage
  Armor = CAVALRY	  			20%
	Armor = URUK				30% //80%
	Armor = SPECIALIST			30% //40% ;100
	Armor = PIERCE				0% ;1% ;25     //archer damage
	Armor = FLAME				10% ;100    //fire damage
	Armor = SIEGE				200% ;300    //siege damage
	Armor = STRUCTURAL			1% //66%    ;structural damage (from structure arrows) 
	Armor = HERO				20%    //Hero damage  
	Armor = HERO_RANGED		10%     //Hero bow damage
	Armor = LOGICAL_FIRE	 		10%
End

;------------------------------------------------------------------------------- SEE!
Armor WildStructureArmor			; NOTE - This is based on StructureArmor (original value to the far right)
  Armor = DEFAULT       	 	50% //60%	; This sets the level for all nonspecified damage types!
  Armor = CRUSH         	 	10% //1%	; Horseman damage
  Armor = SLASH         	 	15% //40%	; Soldier damage  
  Armor = CAVALRY				15% //40%   ; ???			
  Armor = URUK					20% //40% 	; ???
  Armor = SPECIALIST		 		20% //40% 	; Pikeman damage	
  Armor = PIERCE					0%  //2%	; Archer damage
  Armor = FLAME         		25% //100%	; Fire damage
  Armor = FROST          		100%   	; Ice damage
  Armor = SIEGE         		150%		; Siege damage
  Armor = STRUCTURAL		 	5% //25%	; Grond damage destroys all!
  Armor = HERO          	 	25% //50%	; Hero damage
  Armor = HERO_RANGED   	 	10%		; Hero bow damage
  Armor = LOGICAL_FIRE		  	10% //2%
End

;------------------------------------------------------------------------------- SEE!
Armor GoblinFighterArmor
  Armor = DEFAULT         	100%   ; 
  Armor = SLASH           	100%   ; 
  Armor = PIERCE           	150%   ;  
  Armor = SPECIALIST      	40%   ; 
  Armor = CAVALRY	  		150%   ;
  Armor = CRUSH           	100%   ; 
  Armor = SIEGE           	100%   ;
  Armor = FLAME           	100%   ; 
  Armor = MAGIC           	100%   ;
  Armor = HERO            	200%   ;
  Armor = HERO_RANGED     	200%   ; 
  Armor = STRUCTURAL	  	100%	
  FlankedPenalty = 			50%     
End
;------------------------------------------------------------------------------- SEE!
Armor GoblinFighterScavengedArmor								;WildFighterScavengedArmor
  Armor = DEFAULT         	50%   ; 
  Armor = SLASH           	50%   ; 
  Armor = PIERCE           	75%   ;  
  Armor = SPECIALIST      	20%   ; 
  Armor = CAVALRY	  		75%   ;
  Armor = CRUSH           	50%   ; 
  Armor = SIEGE           	50%   ;
  Armor = FLAME           	50%   ; 
  Armor = MAGIC           	50%   ;
  Armor = HERO            	100%   ;
  Armor = HERO_RANGED     	100%   ; 
  Armor = STRUCTURAL	  	20%	
  FlankedPenalty = 			50%      
End

;------------------------------------------------------------------------------
Armor WildMarauderArmor
  Armor = DEFAULT         	100%   ; 100%
  Armor = SLASH           	200%   ;
  Armor = PIERCE          	125%   ;  50%
  Armor = SPECIALIST      	100%   ;
  Armor = CAVALRY	   		20%
  Armor = CRUSH            	10%   ;  50%
  Armor = SIEGE           	100%   ;
  Armor = FLAME           	100%   ;  30%
  Armor = MAGIC           	100%   ;
  Armor = HERO            	200%   ;
  Armor = HERO_RANGED     	200%   ;
  Armor = STRUCTURAL	  	100%	
  FlankedPenalty 	 = 			75%      
End
;------------------------------------------------------------------------------
Armor WildMarauderHeavyArmor
  Armor = DEFAULT        	50% ;40%
  Armor = SLASH          	100% ;
  Armor = PIERCE         	65% ; 20%
  Armor = SPECIALIST       	50% 
  Armor = CAVALRY	     	10% ;
  Armor = CRUSH          	5%  ;40%
  Armor = SIEGE           	50% ;100%
  Armor = FLAME          	50%  ; 0%
  Armor = MAGIC          	50% ;100%
  Armor = HERO           	100% ; 50%
  Armor = HERO_RANGED    	100% ; 50%  
  Armor = STRUCTURAL	  	20%	
  FlankedPenalty 	 = 			75%     
End

;------------------------------------------------------------------------------
Armor ShelobArmor
  Armor = DEFAULT		25%		;this sets the level for all nonspecified damage types
  Armor = SLASH			25%		;soldier damage
  Armor = URUK			40%  
  Armor = PIERCE			25%		;archer damage
  Armor = SPECIALIST 	50%  
  Armor = HERO         	75% //50%    	;hero damage
  Armor = HERO_RANGED  50%          	;Hero bow damage
  Armor = STRUCTURAL   150%
  Armor = FLAME		   	200%  
  Armor = FROST			100%
  Armor = SIEGE			150%     ;siege damage  
End











;------------------------------------------------------------------------------
Armor BalrogArmor
  Armor = DEFAULT	  	1%				;Likes to have things think they can attack him
  Armor = CRUSH			1%     		;horseman crush
  Armor = SLASH			5% //10%    	 	;soldier damage
  Armor = CAVALRY	  	8% //10%		;horseman damage
  Armor = URUK			7% //20%     	;soldier damage
  Armor = PIERCE			5%     		;archer damage - has to be low because he is such an easy target
  Armor = SIEGE		 	25%			; siege weapons can hurt him
  Armor = STRUCTURAL	5% //10%		;structural damage (from structure arrows)
  Armor = HERO		 	50%			; Other heroes can hurt him too.  Watch out for heroes Mr. Balrog!
  Armor = MAGIC			150% //100%	; Gandalf can really hurt him.
  Armor = HERO_RANGED  15% //10%    	; Hero bow damage
  Armor = FLAME			0% ;5%  ;150%   ;fire damage
  Armor = LOGICAL_FIRE  	0% ;1%
  Armor = SPECIALIST 	15% //10%     	;pikes
End

;------------------------------------------------------------------------------


;------------------------------------------------------------------------------

Armor WildArcherScavengedArmor
  Armor = DEFAULT        	 60%   ; originally 50%
  Armor = SLASH          	110%   ; originally 50%
  Armor = PIERCE          	 60%   ; originally 50% 
  Armor = SPECIALIST     	110%   ; originally 50%
  Armor = CAVALRY	  	140%   ; originally 100%
  Armor = CRUSH           	100%   ; 
  Armor = SIEGE          	 50%   ;
  Armor = FLAME           	 50%   ; 
  Armor = FROST          	 75%   ;
  Armor = MAGIC           	 50%   ;
  Armor = HERO            	100%   ;
  Armor = HERO_RANGED     	100%   ; 
  Armor = STRUCTURAL	 	 25%   ; originally 20%
  FlankedPenalty 	       = 50%              
End




;------------------------------------------------------------------------------
Armor MarauderSwordArmor
  Armor = DEFAULT         	 90%   ; 100%	originally 100%
  Armor = SLASH           	100%   ; 	originally 200%
  Armor = PIERCE          	 80%   ;  50%	originally 125%	RotWK originally 100%
  Armor = SPECIALIST      	 60%   ;	originally 100%
  Armor = CAVALRY	  	100%   ;	originally 20%
  Armor = CRUSH           	 60%   ;  50%
  Armor = SIEGE           	100%   ;
  Armor = FLAME           	100%   ;  30%
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   ;
  Armor = HERO            	200%   ;
  Armor = HERO_RANGED     	200%   ;
  Armor = STRUCTURAL	  	 75%   ;	originally 100%	
  FlankedPenalty 	       = 75%         
End

;------------------------------------------------------------------------------
Armor MarauderSwordHeavyArmor
  Armor = DEFAULT            	 50% 	;  40%	originally 50%
  Armor = SLASH               	 50% 	;	originally 100%
  Armor = PIERCE            	 40% 	;  20%	originally 65%		RotWK originally 50%
  Armor = SPECIALIST         	 30% 	;	originally 50%
  Armor = CAVALRY	     	 50% 	;	originally 10%
  Armor = CRUSH             	 30%  	;  40%
  Armor = SIEGE              	 50% 	; 100%
  Armor = FLAME              	 50%  	;   0%
  Armor = FROST          	100%   ;
  Armor = MAGIC              	 50% 	; 100%
  Armor = HERO                	100% 	;  50%
  Armor = HERO_RANGED         	100% 	;  50%  
  Armor = STRUCTURAL	 	 20%	;	originally 20%
  FlankedPenalty 	       = 75%     
End

;------------------------------------------------------------------------------
Armor GoblinArcherArmor
  Armor = DEFAULT         	110%   ; 100%	originally 100%
  Armor = SLASH           	170%   ; 100% 	originally 100%
  Armor = PIERCE          	 90%   ;  50% 	originally 100%
  Armor = SPECIALIST       	165%   ;  50% 	originally 100%
  Armor = CRUSH            	200%   ; 200%
  Armor = SIEGE           	100%   ;
  Armor = FLAME           	100%   ;  30%
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   ;
  Armor = HERO            	200%   ;
  Armor = HERO_RANGED     	200%   ;
  Armor = CAVALRY	 	200%   ;	originally 200%
  Armor = STRUCTURAL	  	 50%   ;	originally 100%
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
Armor HillTrollArmor		       ; New Armor Type for Expansion
  Armor = DEFAULT         	 75%   ; 	originally 100%
  Armor = SLASH           	100%   ;  	originally 150%
  Armor = PIERCE          	 80%   ;  	originally 125%		RotWK originally100%
  Armor = SPECIALIST       	 80%   ;	originally 100%   
  Armor = CRUSH            	100%   ; 
  Armor = SIEGE           	100%   ;
  Armor = FLAME           	100%   ;  
  Armor = FROST          	 50%   ;
  Armor = MAGIC           	100%   ;
  Armor = HERO            	200%   ;
  Armor = HERO_RANGED     	200%   ;
  Armor = CAVALRY	 	 20%   ; 	
  Armor = STRUCTURAL	  	 60%   ;	originally 100%
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
Armor HillTrollHeavyArmor	       ; New Armor Type for Expansion
  Armor = DEFAULT         	 40%   ; 	originally 50%
  Armor = SLASH           	 50%   ; 	originally 75%
  Armor = PIERCE          	 40%   ;   	originally 65%		RotWK originally 40%
  Armor = SPECIALIST       	 40%   ;   	originally 50%
  Armor = CRUSH            	 50%   ; 
  Armor = SIEGE           	 50%   ;
  Armor = FLAME           	 50%   ;  
  Armor = FROST          	 25%   ;
  Armor = MAGIC           	 50%   ;
  Armor = HERO            	100%   ;
  Armor = HERO_RANGED     	100%   ;
  Armor = CAVALRY	 	 15%   ;	originally 10%
  Armor = STRUCTURAL	  	 20%   ;	
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
Armor WildSpiderlingArmor
  Armor = DEFAULT         	110%   	; 100%	originally 100%
  Armor = SLASH           	100%   	; 100%	originally 50%
  Armor = PIERCE           	 65%   	; 100%	originally 100%		RotWK originally 75%
  Armor = SPECIALIST      	200%   	; 200%	originally 200%
  Armor = CRUSH          	  1%   	; 100%
  Armor = SIEGE           	100%   	;
  Armor = FLAME           	100%   	;  50%
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   	;
  Armor = HERO            	200%   	; 100%
  Armor = HERO_RANGED     	200%   	; 200%
  Armor = CAVALRY	  	150% 	; 	Originally 100%
  Armor = STRUCTURAL	  	110%	;	originally 100%
  FlankedPenalty 	       = 50%     
End


;------------------------------------------------------------------------------
Armor WildSpiderHoleSpiderlingArmor
  Armor = DEFAULT         	100%   ; 100%
  Armor = SLASH           	 50%   ; 100%
  Armor = PIERCE          	 65%   ; 100%		RotWK originally 75%
  Armor = SPECIALIST      	500%   ; 200%
  Armor = CRUSH           	100%   ; 100%
  Armor = SIEGE           	110%   ;
  Armor = FLAME           	100%   ;  50%
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   ;
  Armor = HERO            	100%   ; 100%
  Armor = HERO_RANGED     	100%   ; 200%
  Armor = STRUCTURAL	  	100%	
  FlankedPenalty 	       = 50%     
End

;------------------------------------------------------------------------------
Armor WildSpiderRiderArmor
  Armor = DEFAULT         	 85%   	; 100%	originally 100%
  Armor = SLASH          	 70%   	; 100%	originally 80%
  Armor = PIERCE          	 40%   	;  50%	originally 50%		RotWK originally 45%
  Armor = SPECIALIST      	135%   	;  50%	originally 200%
  Armor = CRUSH           	  1%   	; 200%
  Armor = CAVALRY	  	100%  	; 	Originally 100%
  Armor = SIEGE           	100%   	;
  Armor = FLAME           	100%   	;  30%
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   	;
  Armor = HERO            	200%   	;
  Armor = HERO_RANGED     	200%   	; 
  Armor = STRUCTURAL	  	 80%	;	originally 100%
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
Armor WildSpiderRiderHeavyArmor
  Armor = DEFAULT            	 45% 	;  40%	originally 50%
  Armor = SLASH              	 35% 	;  40%	originally 50%
  Armor = PIERCE             	 20% 	;  20%	originally 25%		RotWK originally 25%
  Armor = SPECIALIST         	 95% 	;	originally 50%
  Armor = CAVALRY	  	 70% 	; 	Originally 100%
  Armor = CRUSH              	100% 	;  50%
  Armor = SIEGE              	 50% 	; 100%
  Armor = FLAME              	 50% 	;   0%
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 	; 100%
  Armor = HERO                	100% 	;  50%
  Armor = HERO_RANGED         	100% 	;  50%  
  Armor = STRUCTURAL	  	 20%	; 	originally 100%	 
  FlankedPenalty 	       = 50%     
End

;------------------------------------------------------------------------------
Armor MountainGiantArmor
  Armor = DEFAULT      		 25%    ; for all nonspecified damage types 	originally 25%
  Armor = CRUSH        		  1%    ; horseman damage			
  Armor = SLASH         	100%    ; 1%	 ;soldier damage		originally 100%
  Armor = PIERCE       		 50%    ; archer damage				originally 50%
  Armor = SPECIALIST    	200%   	; 200%					originally 200%
  Armor = FLAME         	300%    ; fire damage
  Armor = FROST          	100%   ;
  Armor = SIEGE         	100%    ; siege damage
  Armor = STRUCTURAL   		 25%    ; Structural damage (Ent rocks)		originally 25%
  Armor = CHOP          	100%    ; axe damage
  Armor = HERO          	200%    ; hero damage
  Armor = HERO_RANGED   	200%    ; Hero bow damage
  Armor = CAVALRY 		 75%	; Horse damage				originally 75%
  Armor = MAGIC         	100%    ; hero damage
End
