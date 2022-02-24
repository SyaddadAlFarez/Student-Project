import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class MyWorld here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class MyWorld extends World
{
    private int score;
    private int lives = 3;
    /**
     * Constructor for objects of class MyWorld.
     * 
     */
    public MyWorld()
    {    
        super(960, 540, 1);
        prepare();
        coin();
    }
    
    /**
     * Prepare the world for the start of the program.
     * That is: create the initial objects and add them to the world.
     */
    private void prepare()
    {
        Spaceship1 spaceship1 = new Spaceship1();
        addObject(spaceship1,this.getWidth() - 90, this.getHeight() / 2);
        int i;
        for (i = 0; i < 1; i++) {
            int xCoord = Greenfoot.getRandomNumber(this.getWidth() - 210);
            int yCoord = Greenfoot.getRandomNumber(this.getHeight());
            addObject(new Asteroid1(), xCoord, yCoord);
        }

        for (i = 0; i < 1; i++) {
            int xCoord = Greenfoot.getRandomNumber(this.getWidth() - 210);
            int yCoord = Greenfoot.getRandomNumber(this.getHeight());
            addObject(new Asteroid2(), xCoord, yCoord);
        }

        for (i = 0; i < 1; i++) {
            int xCoord = Greenfoot.getRandomNumber(this.getWidth() - 210);
            int yCoord = Greenfoot.getRandomNumber(this.getHeight());
            addObject(new Asteroid3(), xCoord, yCoord);
        }
        
        showText("Score : " + score, this.getWidth() - 80, 30);
        showText("Lives : " + lives, this.getWidth() - 80, 70);
        showText("|", this.getWidth() - 150, 100);
        showText("|", this.getWidth() - 150, 150);
        showText("|", this.getWidth() - 150, 200);
        showText("|", this.getWidth() - 150, 250);
        showText("|", this.getWidth() - 150, 300);
        showText("|", this.getWidth() - 150, 350);
        showText("|", this.getWidth() - 150, 400);
        showText("|", this.getWidth() - 150, 450);
    }
    
    public void coin() {
        int i = 0;
        for (i=0; i<3; i++) {
            int xCoord = Greenfoot.getRandomNumber(this.getWidth() - 210);
            int yCoord = Greenfoot.getRandomNumber(this.getHeight());
            addObject(new coin(), xCoord, yCoord);
           
        }
    }   
    
    public int getScore() {
        return score;
    }
    
    public void updateScore() {
        score++;
        showText("Score : " + score, this.getWidth() - 80, 30);
    }
    
    public void updateLives () {
        lives--;
        showText("Lives : " + lives, this.getWidth() - 80, 70);
        if (lives == 0) {
            setBackground(new GreenfootImage("over.jpg"));
            showText("GAME OVER", this.getWidth() / 2 , this.getHeight() / 2 - 70);
            showText("Score : " + score, this.getWidth() / 2 , this.getHeight() / 2 - 50);
            showText("Lives : " + lives, this.getWidth() / 2, this.getHeight() / 2 - 30);
            Greenfoot.stop();
        }
    }
}
