import java.awt.*;
public class DrawingLines extends Frame
{
  public DrawingLines()
  {          // the following 3 lines creates an empty frame
    setTitle("Line Graphics");
    setSize(300, 350);
    setVisible(true);
  }
  public void paint(Graphics g)
  {        
    g.drawLine(60,90, 150, 200);
    g.drawLine(110, 120, 250, 270);
  }
  public static void main(String args[])
  {
    new DrawingLines();
  }
}
