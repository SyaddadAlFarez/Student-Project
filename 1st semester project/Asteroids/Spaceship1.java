import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Spaceship1 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Spaceship1 extends Space
{
    /**
     * Act - do whatever the Spaceship1 wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public int i = 0;
    public void act()
    {
        
        if (Greenfoot.isKeyDown("left")) {
            belokKiri();
        }
        
        if (Greenfoot.isKeyDown("right")) {
            belokKanan();
        }
        
        if (Greenfoot.isKeyDown("up")) {
            maju();
        }
        hadapKiri();
        crash();
    }
    
    public void belokKanan() {
        turn(4);
    }
    
    public void belokKiri() {
        turn(-4);
    }
        
    public void maju() {
        move(-5);
    }
    
    public void crash () {
        if (isTouching(Asteroids.class)) {
            MyWorld myworld = (MyWorld) getWorld();
            myworld.updateLives();
            setLocation(getWorld().getWidth() - 90, getWorld().getHeight() / 2);
            int i;
            for (i = 0; i < 5; i++) {
                turn(Greenfoot.getRandomNumber(5));
                getImage().setTransparency(Greenfoot.getRandomNumber(100));
            }
        }
        else {
            getImage().setTransparency(255);
        }
    }
    
    public boolean hadapKiri() {
        if (i == 0) {
            getImage().rotate(-180);
            i++;
            return true;
        } else {
            return false;
        }
    }
}
