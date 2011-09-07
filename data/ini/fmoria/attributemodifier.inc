////////////////////////////
// ATTRIBUTEMODIFIER.INC //
//////////////////////////
//Moria//
////////

ModifierList BalrogIgniteState
	Category = SPELL
	Modifier = ARMOR 50%		// Additive.  Sum of these are subtracted from all entries in Armor.ini
	Modifier = DAMAGE_MULT 200%		// Multiplicitive.  Damage multiplied by this, will compound in multiple bonuses
	Duration = 30000
End
