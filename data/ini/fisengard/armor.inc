////////////////
// ARMOR.INC //
//////////////
//Isengard//
///////////


;------------------------------------------------------------------------------
Armor BerserkerArmor
  Armor = DEFAULT         	 90%    ; for all nonspecified damage types	originally 100%
  Armor = CRUSH        		  1%    ; horseman damage
  Armor = SLASH         	 90%    ; 1%	 ;soldier damage		originally 100%
  Armor = PIERCE       		 90%    ; archer damage				originally 90%
  Armor = SPECIALIST    	 45%   	; 200%					originally 50%
  Armor = FLAME         	300%    ; fire damage
  Armor = FROST          	100%   ;
  Armor = SIEGE         	100%    ; siege damage
  Armor = STRUCTURAL   		 70%    ; Structural damage (Ent rocks)		originally 50%
  Armor = CHOP          	100%    ; axe damage
  Armor = HERO          	100%    ; hero damage				originally 200% 
  Armor = HERO_RANGED   	100%    ; Hero bow damage			originally 200%
  Armor = CAVALRY 		175%	; Horse damage				originally 125%
  Armor = MAGIC         	100%    ; hero damage
End

;------------------------------------------------------------------------------
Armor UrukHaiArmor
  Armor = DEFAULT         	 70%   	; 100%	originally 100%
  Armor = SLASH           	 70%   	; 100%	originally 100%
  Armor = PIERCE           	 60%   	;  50%	originally 150%			RotWK originally 70%
  Armor = SPECIALIST     	 25%   	;  50%	originally 40%
  Armor = CAVALRY	  	155%	;	originally 150%
  Armor = CRUSH           	125%   	; 200%  originally 100% for Expansion
  Armor = SIEGE           	100%   	;
  Armor = FLAME           	100%   	;  30%
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   	;
  Armor = HERO            	200%   	;
  Armor = HERO_RANGED     	200%   	; 
  Armor = STRUCTURAL	  	 50%	; 	originally 100%
  FlankedPenalty 	       = 50%  
End

;------------------------------------------------------------------------------
Armor UrukHaiHeavyArmor
  Armor = DEFAULT            	 35% 	;  40%	originally 50%
  Armor = SLASH              	 35% 	;  40%	originally 50%
  Armor = PIERCE             	 30% 	;  20%	originally 75%		RotWK originally 35%
  Armor = SPECIALIST         	 10% 	;	originally 20%
  Armor = CAVALRY	 	 90% 	;	originally 75%
  Armor = CRUSH             	 65% 	;  	originally 50%
  Armor = SIEGE              	 50% 	; 100%
  Armor = FLAME              	 50% 	;   0%
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 	; 100%
  Armor = HERO                	100% 	;  50%
  Armor = HERO_RANGED         	100% 	;  50%   
  Armor = STRUCTURAL	 	 20%	;	originally 20%
  FlankedPenalty 	       = 50%  
End

;------------------------------------------------------------------------------
Armor UrukPikeArmor			; Newly added for the expansion
  Armor = DEFAULT            	100% 	;  
  Armor = SLASH              	150% 	;  
  Armor = PIERCE             	100% 	;	RotWK originally 125%  
  Armor = SPECIALIST         	100% 	;	
  Armor = CAVALRY	 	 35% 	;	
  Armor = CRUSH             	 50% 	;  
  Armor = SIEGE              	 50% 	; 
  Armor = FLAME              	 50% 	;   
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 	; 
  Armor = HERO                	200% 	;  
  Armor = HERO_RANGED         	200% 	;    
  Armor = STRUCTURAL	 	 75%	;
  FlankedPenalty 	       = 50%  
End

;------------------------------------------------------------------------------
Armor UrukPikeHeavyArmor		; Newly added for the expansion
  Armor = DEFAULT            	 60% 	;  
  Armor = SLASH              	100% 	;  
  Armor = PIERCE             	 60% 	;	RotWK originally 90%  
  Armor = SPECIALIST         	 55% 	;	
  Armor = CAVALRY	 	 25% 	;	
  Armor = CRUSH             	 50% 	;  
  Armor = SIEGE              	 50% 	; 
  Armor = FLAME              	 50% 	;  
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 	;
  Armor = HERO                	100% 	; 
  Armor = HERO_RANGED         	100% 	;     
  Armor = STRUCTURAL	 	 20%	;
  FlankedPenalty 	       = 50%  
End

;------------------------------------------------------------------------------
Armor WildmenMissileArmor			; Newly added for expansion
  Armor = DEFAULT            	110% 	; 	 
  Armor = SLASH              	160% 	;  	
  Armor = PIERCE             	 50% 	; 	
  Armor = SPECIALIST         	160% 	;	
  Armor = CAVALRY	 	200% 	;	
  Armor = CRUSH             	100% 	;  
  Armor = SIEGE              	100% 	; 
  Armor = FLAME              	100% 	;  
  Armor = FROST          	100%   ;
  Armor = MAGIC              	100% 	; 
  Armor = HERO                	200% 	; 
  Armor = HERO_RANGED         	200% 	;    
  Armor = STRUCTURAL	 	100%	;	
  FlankedPenalty 	       = 50%  
End

;------------------------------------------------------------------------------
Armor WildmenArmor			; Newly added for expansion
  Armor = DEFAULT            	110% 	; 	 
  Armor = SLASH              	 95% 	;		RotWK originally 110%  	
  Armor = PIERCE             	110% 	; 	
  Armor = SPECIALIST         	 50% 	;	
  Armor = CAVALRY	 	200% 	;	
  Armor = CRUSH             	140% 	; originally 100%
  Armor = SIEGE              	100% 	; 
  Armor = FLAME              	100% 	;  
  Armor = FROST          	100%   ;
  Armor = MAGIC              	100% 	; 
  Armor = HERO                	200% 	; 
  Armor = HERO_RANGED         	200% 	;    
  Armor = STRUCTURAL	 	 80%	;	
  FlankedPenalty 	       = 50%  
End

;------------------------------------------------------------------------------
Armor WildmenHeavyArmor			; Newly added for expansion
  Armor = DEFAULT            	 55% 	; 	 	
  Armor = SLASH              	 55% 	;  
  Armor = PIERCE             	 50% 	;  		RotWK originally 50%	
  Armor = SPECIALIST         	 25% 	;	
  Armor = CAVALRY	 	130% 	;	
  Armor = CRUSH             	 70% 	; originally 50%
  Armor = SIEGE              	 50% 	; 
  Armor = FLAME              	 50% 	;   
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 	; 
  Armor = HERO                	100% 	;  
  Armor = HERO_RANGED         	100% 	;    
  Armor = STRUCTURAL	 	 40%	;	
  FlankedPenalty 	       = 50%  
End

;------------------------------------------------------------------------------
Armor CorsairsArmor			; Newly added for expansion
  Armor = DEFAULT            	 90% 	; 	 	
  Armor = SLASH              	 90% 	;  
  Armor = PIERCE             	 70% 	;  		RotWK originally 90%	
  Armor = SPECIALIST         	 40% 	;	
  Armor = CAVALRY	 	175% 	;	
  Armor = CRUSH             	 50% 	;  
  Armor = SIEGE              	 50% 	; 
  Armor = FLAME              	 50% 	;   
  Armor = FROST          	100%   ;
  Armor = MAGIC              	 50% 	; 
  Armor = HERO                	200% 	;  
  Armor = HERO_RANGED         	200% 	;    
  Armor = STRUCTURAL	 	 70%	;	
  FlankedPenalty 	       = 50%  
End

;------------------------------------------------------------------------------
Armor CrossbowArmor
  Armor = DEFAULT         	 80%   	; Archer 100% ; Gondor 100%	originally 100%
  Armor = SLASH           	125%   	; Archer 400% ; Gondor 200% 	originally 100%
  Armor = PIERCE          	 50%   	; Archer 100% ; Gondor  80% 	originally 100%
  Armor = SPECIALIST       	125%   	; 				originally 100%
  Armor = CRUSH           	180%   	; Archer 200% ; Gondor 100%	
  Armor = SIEGE           	100%   	;
  Armor = FLAME           	100%   	;
  Armor = FROST          	100%   ;
  Armor = MAGIC           	100%   	;
  Armor = HERO            	200%   	;
  Armor = HERO_RANGED     	200%   	;   
  Armor = CAVALRY	  	200% 	;				originally 200%
  Armor = STRUCTURAL	  	 40%	;				originally 100%
  FlankedPenalty 	       = 50%      
End

;------------------------------------------------------------------------------
Armor CrossbowHeavyArmor
  Armor = DEFAULT            	 40% 	; originally 50%
  Armor = SLASH             	 80%	; originally 50%
  Armor = PIERCE             	 25% 	; originally 50%
  Armor = SPECIALIST        	 80%	; originally 50%
  Armor = CRUSH              	150% 
  Armor = SIEGE              	 50% 
  Armor = FLAME              	 50% 
  Armor = FROST          	 50%   ;
  Armor = MAGIC              	 50% 
  Armor = HERO                	100% 
  Armor = HERO_RANGED         	100% 
  Armor = CAVALRY	  	110%	; originally 100%
  Armor = STRUCTURAL	 	 20%	; originally 20%
  FlankedPenalty 	       = 50%    
End

;------------------------------------------------------------------------------
