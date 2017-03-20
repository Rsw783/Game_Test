//Stores all of the classes and their respective functions


class Entity
{
	private:
		int stat_Health, stat_Str, stat_Speed, stat_Def,//HP&MP are usable amounts, Health&Mag are max
			stat_Lvl, stat_MP, stat_Magic, stat_HP, stat_Luck, stat_Exp;//luck is chance to crit & maybe dodge
		
	public:
		int get_HP(){return stat_HP;}
		int get_MP(){return stat_MP;}
		
		Entity(bool);
		
};

Entity::Entity(bool is_Character)
{
	if (is_Character)
	{
		stat_Health = stat_Magic = stat_MP = stat_HP = 100;
		stat_Str = stat_Def = 30;
		stat_Speed = stat_Luck = 10;
		stat_Lvl = stat_Exp = 1;
	}
	//include an 'else' for when monsters get randomly generated -- maybe
	
}
