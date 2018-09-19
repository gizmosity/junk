private int Vy = 0;
    private int gravity = 1;
    private int decay = 8;
    private int Vx = 0;
    boolean canJump = true;

Vy = Vy + gravity;
        
        if (OnGround()){
            preventSink();
            Vy = -Vy + decay; 
        }
        
        if (OnRight()){
            Vx = -Vx;
            rightSink();
        }
        
        if (OnLeft()){
            Vx = -Vx;
            leftSink();
        }
        setLocation(getX() + Vx, getY() + Vy);
        
        if (Greenfoot.isKeyDown("right")){
            Vx = Vx + 2;
        }
        
        if (Greenfoot.isKeyDown("left")){
            Vx = Vx + -2;
        }
        
        if (!Greenfoot.isKeyDown("left") && !Greenfoot.isKeyDown("right")){
            Vx = 0;
        }
        
        if (Greenfoot.isKeyDown("up") && canJump){
            Vy = -20;
            canJump = false;
        }
        
        if (!Greenfoot.isKeyDown("up")){
            Vy = Vy + gravity;
            canJump = true;
        }

public boolean OnRight(){
        return getX() > getWorld().getWidth() - getImage().getWidth() / 4; 
    }
    
    public boolean OnLeft(){
        return getX() < getImage().getWidth() / 4; 
    }

    public boolean OnGround(){
        return getY() > getWorld().getHeight() - getImage().getHeight() / 2;
    }
    
    public void rightSink(){
        setLocation(getWorld().getWidth() - getImage().getWidth() / 4, getY()); 
    }
    
    public void leftSink(){
        setLocation(getImage().getWidth() / 4, getY()); 
    }
    
    public void preventSink(){
        setLocation(getX(), getWorld().getHeight() - getImage().getHeight() / 2);
    }