import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class coin here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class coin extends Space
{
    
    /**
     * Act - do whatever the coin wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    {
        collect();
    }
    
    public void collect () {
        if (isTouching(Spaceship1.class)) {
            setLocation(Greenfoot.getRandomNumber(getWorld().getWidth() - 200), Greenfoot.getRandomNumber(getWorld().getHeight()));
            MyWorld myworld = (MyWorld) getWorld();
            myworld.updateScore();
        }
    }
}
