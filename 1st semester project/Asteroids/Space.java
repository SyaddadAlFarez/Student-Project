import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Space here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Space extends Actor
{
    /**
     * Act - do whatever the Space wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    
    public boolean atRightEdge() {
        if ((getX() + (getImage().getWidth() / 2)) > getWorld().getWidth() - 200) {
            return true;
        }
        else {
            return false;
        }
    }
    
    public boolean atLeftEdge() {
        if (getX() < 5) {
            return true;
        }
        else {
            return false;
        }
    }
    
    public boolean atBottomEdge() {
        if (getY() > getWorld().getHeight() - 5) {
            return true;
        }
        else {
            return false;
        }
    }
    
    public boolean atTopEdge() {
        if (getY() < 5) {
            return true;
        }
        else {
            return false;
        }
    }
}
