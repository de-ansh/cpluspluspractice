import java.io.*;
abstract class Shape
{
                double r,h;
                                Shape(double r, double h)
                                {
                                                this.r = r;
                                                                this.h = h;
                                }
                abstract double calcArea();
                                abstract double calcVolume();
}
class Sphere extends Shape
{
                Sphere(double r)
                {
                                super(r,0);
                }
                double calcArea()
                {
                                return 4*3.14*r*r;
                }
                double calcVolume()
                {
                                return 4*3.14*Math.pow(r,3)/3;
                }
}
class Cone extends Shape
{
                Cone(double r, double h)
                {
                                super(r,h);
                }
                double calcArea()
                {
                                return 3.14*r*(r+Math.sqrt(r*r+h*h));
                }
                double calcVolume()
                {
                                return 3.14*r*r*h/3;
                }
}
class Cylinder extends Shape
{
                Cylinder(double r, double h)
                {
                                super(r,h);
                }
                double calcArea()
                {
                                return 2*3.14*r*(h+r);
                }
                double calcVolume()
                {
                                return 3.14*r*r*h;
                }
}
class Slip1_1
{
                public static void main(String args[])throws Exception
                {
                                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                                                Shape s=null;
                                                double r=0,h=0;
                                int ch;
                                                do
                                                {
                                                                System.out.print("1.Sphere"+"\n2.Cone"+"\n3.Cylinder"+ "\n4.Exit "+"\nEnter your choice : ");
                                                                                ch = Integer.parseInt(br.readLine());
                                                                                switch(ch)
                                                                                {
                                                                                                case 1:
                                                                                                       System.out.print("Enter radius of sphere:");
                                                                                                                       r = Double.parseDouble(br.readLine());
                                                                                                                       s = new Sphere(r);
                                                                                                                       break;
                                                                                                case 2:
                                                                                                       System.out.print("Enter radius of cone:");
                                                                                                                       r = Double.parseDouble(br.readLine());
                                                                                                                       System.out.print("Enter height of cone:");
                                                                                                                       h = Double.parseDouble(br.readLine());
                                                                                                                       s = new Cone(r,h);
                                                                                                                       break;
                                                                                                case 3:
                                                                                                       System.out.print("Enter radius of cylinder:");
                                                                                                                       r = Double.parseDouble(br.readLine());
                                                                                                                       System.out.print("Enter height of cylinder:");
                                                                                                                       h = Double.parseDouble(br.readLine());
                                                                                                                       s = new Cylinder(r,h);
                                                                                                                       break;
                                                                                                case 4:
                                                                                                       System.exit(0);
                                                                                }
                                                                System.out.println("Area = "+s.calcArea()+
                                                                                                "\nVolume = "+s.calcVolume());
                                                }while(ch!=4);
                }
}
