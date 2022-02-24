import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Asteroids here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Asteroids extends Space

{
    /**
     * Act - do whatever the Asteroids wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    
    public void act () {
        
        move (1);

        if (atRightEdge()) {
            setLocation( 6 , Greenfoot.getRandomNumber(getWorld().getHeight()));
            turn(Greenfoot.getRandomNumber(91));
        }
        
        if (atLeftEdge()) {
            setLocation( getWorld().getWidth() - 210 , Greenfoot.getRandomNumber(getWorld().getHeight()));
            turn(Greenfoot.getRandomNumber(91));
        }
        
        if (atBottomEdge()) {
            setLocation( Greenfoot.getRandomNumber(getWorld().getWidth() - 210) , 6 );
            turn(Greenfoot.getRandomNumber(91));
        }
        
        if (atTopEdge()) {
            setLocation( Greenfoot.getRandomNumber(getWorld().getWidth() - 210) , getWorld().getHeight());
            turn(Greenfoot.getRandomNumber(91));
        }
    }
    
    
    
    //public boolean asteroidset () {
       // Actor a = getOneIntersectingObject(Spaceship1.class);
       // if (a != null) {
      //      return true;
//        }
     //   return false;
    //}
    
    
    
    
}
