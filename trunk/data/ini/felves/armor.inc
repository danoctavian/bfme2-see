////////////////
// ARMOR.INC //
//////////////////////
//Elves//Lothlorien//
////////////////////


;/////////////Elven Armors\\\\\\\\\\\\\\\\\\
;------------------------------------------------------------------------------
Armor EagleArmor
  Armor = DEFAULT         	100%   	; 100%
  Armor = SLASH             	 25%   	; RotWK originally was 0% 
  Armor = PIERCE          	 45%   	; 100%
  Armor = SPECIALIST      	  0%   	; 200%
  Armor = CRUSH           	  0%   	; 100%
  Armor = SIEGE           	100%   	; 100%
  Armor = FLAME            	 30%   	; RotWK originally was 50% 
  Armor = FROST          	 50%   ;
  Armor = MAGIC           	 30%   	; RotWK originally was 50% 
  Armor = HERO            	100%   	; 100%
  Armor = HERO_RANGED     	 60%   	; 100%  
  Armor = STRUCTURAL	   	 50%	
  FlankedPenalty 	       = 50%      
End

;------------------------------------------------------------------------------
Armor MirkwoodArcherArmor
  Armor = DEFAULT         	 80%   	; Archer 100% ; Gondor 100%	originally 100%
  Armor = SLASH           	125%   	; Archer 400% ; Gondor 200% 	originally 100%
  Armor = PIERCE          	 50%   	; Archer 100% ; Gondor  80% 	originally 100%
  Armor = SPECIALIST      	125%   	; 				originally 100%
  Armor = CAVALRY	 	165%   	; 				originally 200%
  Armor = CRUSH           	200%   	; Archer 200% ; Gondor 100%	
  Armor = SIEGE           	100%   	;
  Armor = FLAME           	100%   	;
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   	;
  Armor = HERO            	200%   	;
  Armor = HERO_RANGED     	200%   	; 
  Armor = STRUCTURAL	  	 30%	; 				originally 100%
  FlankedPenalty 	       = 50%      
End

;------------------------------------------------------------------------------
Armor MirkwoodArcherHeavyArmor
  Armor = DEFAULT            	 40% 	;	originally 50%
  Armor = SLASH              	 75% 	; 	originally 50%
  Armor = PIERCE             	 25% 	; 	originally 50%
  Armor = SPECIALIST         	 75% 	; 	originally 50%
  Armor = CAVALRY	      	100% 	; 	originally 100%
  Armor = CRUSH               	100% 	;
  Armor = SIEGE              	 50% 	;
  Armor = FLAME              	 50% 	;
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 	;
  Armor = HERO                	100% 	;
  Armor = HERO_RANGED         	100% 	;
  Armor = STRUCTURAL	 	 15%	;	originally 20%
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
Armor LorienArcherArmor
  Armor = DEFAULT         	100%   	; Archer 100% ; Gondor 100%	originally 100%
  Armor = SLASH           	150%   	; Archer 400% ; Gondor 200% 	originally 100%
  Armor = PIERCE          	 75%   	; Archer 100% ; Gondor  80% 	originally 100%
  Armor = SPECIALIST       	150%   	; 				originally 100%
  Armor = CRUSH           	200%   	; Archer 200% ; Gondor 100%
  Armor = SIEGE           	100%   	;
  Armor = FLAME           	100%   	;
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   	;
  Armor = HERO            	200%   	;
  Armor = HERO_RANGED     	200%   	; 
  Armor = CAVALRY	  	200%  	;				originally 200%
  Armor = STRUCTURAL	  	100%	;				originally 100%
  FlankedPenalty 	       = 50%      
End

;------------------------------------------------------------------------------
Armor LorienArcherHeavyArmor
  Armor = DEFAULT            	 50% 	; originally 50%
  Armor = SLASH             	100% 	; originally 50%
  Armor = PIERCE             	 40% 	; originally 50%
  Armor = SPECIALIST         	100% 	; originally 50%
  Armor = CRUSH              	100% 	;
  Armor = SIEGE              	 50% 	;
  Armor = FLAME              	 50% 	;
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 	;
  Armor = HERO                	100% 	;
  Armor = HERO_RANGED         	100% 	;
  Armor = CAVALRY		125% 	; originally 100%
  Armor = STRUCTURAL	 	 25%	; originally 20%
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
Armor LorienWarriorArmor		; Newly Added
  Armor = DEFAULT         	100%   	; 
  Armor = SLASH           	100%   	; 
  Armor = PIERCE          	 75%   	; 			RotWK originally 100%
  Armor = SPECIALIST       	 40%   	; 		
  Armor = CRUSH           	125%   	; originally 190%
  Armor = SIEGE           	100%   	;
  Armor = FLAME           	100%   	;
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   	;
  Armor = HERO            	200%   	;
  Armor = HERO_RANGED     	200%   	; 
  Armor = CAVALRY	  	200%  	;
  Armor = STRUCTURAL	  	 65%	;
  FlankedPenalty 	       = 50%      
End

;------------------------------------------------------------------------------
Armor LorienWarriorHeavyArmor		; Newly Added
  Armor = DEFAULT            	 50% 	; 
  Armor = SLASH             	 50% 	; 
  Armor = PIERCE             	 40% 	; 			RotWK originally 50%
  Armor = SPECIALIST         	 25% 	; 
  Armor = CRUSH              	 65% 	; originally 100%
  Armor = SIEGE              	 50% 	;
  Armor = FLAME              	 50% 	;
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 	;
  Armor = HERO                	100% 	;
  Armor = HERO_RANGED         	100% 	;
  Armor = CAVALRY		130% 	; 
  Armor = STRUCTURAL	 	 35%	; 
  FlankedPenalty 	       = 50%    
End




;------------------------------------------------------------------------------
Armor ElvenWallArmor             	; MOTW generic wall armor 
  Armor = DEFAULT        10%     	; this sets the level for all nonspecified damage types
  Armor = SIEGE         100%     	; siege damage						Originally 200%
  Armor = PIERCE          1%     	; archer damage
  Armor = FLAME           1%     	;
  Armor = STRUCTURAL	 25%	 	; structural damage - Grond inflicts this kind of damage
  Armor = LOGICAL_FIRE	  0%		; Fire
End
