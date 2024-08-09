//Baseclass for a zombie and human in the game
class Actor {
	#isTurned;	

	constructor(x,y, health, speed, strength) {
			/*
				Variables to store position, might need it for testing purposes later.
				Would also be easier to see if zombie and human are adjacent from eachother 
					- of the top of my head
				Max health is there to add debuffs to attack and turned chance.
			*/
		this.x = x;
		this.y = y;
		this.health = health;
		this.maxhealth = maxhealth; 
		this.speed = speed;
		this.strength = strength;
		isTurned = false;
	}

	void Turning() {
		if(isTurned == false) {
			/*
			debuff if health is below third of max health < 1.
			*/
			const debuff = this.health/(this.maxhealth/3);
		}
	}
}