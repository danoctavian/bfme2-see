////////////////
// ARMOR.INC //
//////////////
//Rohan//
////////



;//////////////////////MEN OF THE WEST ARMORS///////////////////////////////////////////
;------------------------------------------------------------------------------
Armor RohirrimArmor
  Armor = DEFAULT         	 80%   	; 100%	originally 100%
  Armor = SLASH           	 80%   	; 100%	originally 80%
  Armor = PIERCE          	 50%   	; 100%	originally 50%		RotWK originally 60%
  Armor = SPECIALIST      	160%   	; 200%	originally 200%
  Armor = CRUSH           	  1%   	; 100%
  Armor = SIEGE           	100%   	;
  Armor = FLAME           	100%   	;  50%
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   	;
  Armor = HERO            	200%   	; 100%
  Armor = HERO_RANGED     	200%   	; 200%
  Armor = CAVALRY	  	 90% 	; 	originally 100%
  Armor = STRUCTURAL	  	 80%	;	originally 100%
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
Armor RohirrimShieldArmor
  Armor = DEFAULT         	 75%   ; 100%	originally 100%
  Armor = SLASH           	 60%   ; 100%	originally 80%
  Armor = PIERCE          	 40%   ; 100%	originally 40%		RotWK originally 35%
  Armor = SPECIALIST      	120%   ; 200%	originally 150%
  Armor = CRUSH             	  1%   ; 100%
  Armor = SIEGE           	100%   ;
  Armor = FLAME           	100%   ;  50%
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   ;
  Armor = HERO            	200%   ; 100%
  Armor = HERO_RANGED     	200%   ; 200%
  Armor = CAVALRY	  	 90%   ; 	originally 100%
  Armor = STRUCTURAL	  	 80%   ;	originally 100%	
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
Armor RohirrimHeavyArmor
  Armor = DEFAULT            	 35% 	;	originally 
  Armor = SLASH               	 25% 	;	originally 
  Armor = PIERCE              	 25% 	;	originally 
  Armor = SPECIALIST         	 90% 	;	originally 
  Armor = CRUSH              	  1% 
  Armor = SIEGE              	 50% 
  Armor = FLAME               	 50% 
  Armor = FROST          	 75%   ;
  Armor = MAGIC              	 50% 
  Armor = HERO               	100% 
  Armor = HERO_RANGED         	100% 
  Armor = CAVALRY	  	 60% 	; 	originally 
  Armor = STRUCTURAL	  	 20%	;	originally 
  FlankedPenalty 	       = 50%     
End

;------------------------------------------------------------------------------
Armor RohirrimShieldHeavyArmor
  Armor = DEFAULT            	 30% 	;	originally 50%
  Armor = SLASH               	 20% 	;	originally 40%
  Armor = PIERCE              	 20% 	;	
  Armor = SPECIALIST         	 85% 	;	
  Armor = CRUSH              	  1% 
  Armor = SIEGE              	 50% 
  Armor = FLAME               	 50% 
  Armor = FROST          	 70%   ;
  Armor = MAGIC              	 50% 
  Armor = HERO               	100% 
  Armor = HERO_RANGED         	100% 
  Armor = CAVALRY	  	 50% 	;	originally 25%
  Armor = STRUCTURAL	  	 20%	;	
  FlankedPenalty 	       = 50%    
End






;------------------------------------------------------------------------------
Armor RohanCampWallArmor
  Armor = DEFAULT         0%     ;this sets the level for all nonspecified damage types
  Armor = FLAME		 20%
  Armor = SIEGE         100%     ;siege damage
  Armor = STRUCTURAL	200%	 ;structural damage - Grond inflicts this kind of damage
End

;------------------------------------------------------------------------------
Armor RohanCastleWall            ;Nigh-invulnerable and ancient walls and wall structures -JBender
  Armor = DEFAULT         0%     ;this sets the level for all nonspecified damage types
  Armor = FLAME		  1%
  Armor = SIEGE         100% 	 ; 20%     ;siege damage
  Armor = STRUCTURAL	100%	 ;structural damage - Grond inflicts this kind of damage
End

;------------------------------------------------------------------------------
Armor RohanCastleWallUpgrade     ;Nigh-invulnerable and ancient walls and wall structures -JBender
  Armor = DEFAULT         0%     ;this sets the level for all nonspecified damage types
  Armor = FLAME		  5%
  Armor = SIEGE         100%     ;siege damage
  Armor = STRUCTURAL	100%	 ;structural damage - Grond inflicts this kind of damage
  Armor = MAGIC		100%
End
;------------------------------------------------------------------------------
Armor RohanCastleWallUpgradeAsTower     ;Nigh-invulnerable and ancient walls and wall structures -JBender
  Armor = DEFAULT         0%     	;this sets the level for all nonspecified damage types
  Armor = FLAME		100%
  Armor = SIEGE         100%     	;siege damage
  Armor = STRUCTURAL	100%	 	;structural damage - Grond inflicts this kind of damage
  Armor = MAGIC		100%
  Armor = FLY_INTO	100%		; so nazgul and eagle can swoop into upgrade only when it is a tower
End
