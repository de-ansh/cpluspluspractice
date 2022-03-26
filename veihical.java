class Vehicle
{
    String regno;
    int model;
    Vehicle(String r, int m)
    {
        regno=r;
        model=m;
    }
    void display()
    {
        System.out.println("Registration no: "+regno);
        System.out.println("Model no: "+model);
    }
}
 
class Twowheeler extends Vehicle
{
    int noofwheel;
    Twowheeler(String r,int m,int n)
    {
        super(r,m);
        noofwheel=n;
    }
    void display()
    {
        System.out.println("Two wheeler tvs");
        super.display();
        System.out.println("No. of wheel : " +noofwheel);
    }
}
 
class Threewheeler extends Vehicle
{
    int noofleaf;
    Threewheeler(String r,int m,int n)
    {
        super(r,m);
        noofleaf=n;
    }
    void display()
    {
        System.out.println("Three wheeler auto");
        super.display();
        System.out.println("No. of leaf:" +noofleaf);
    }
}
 
class Fourwheeler extends Vehicle
{
    int noofleaf;
    Fourwheeler(String r,int m,int n)
    {
        super(r,m);
        noofleaf=n;
    }
    void display()
    {
        System.out.println("Four wheeler car");
        super.display();
        System.out.println("No. of leaf:" +noofleaf);
    }
}
 
class VehicleDemo
{
    public static void main(String arg[])
    {
        Twowheeler t1;
        Threewheeler th1;
        Fourwheeler f1;
        t1=new Twowheeler("TN74 12345", 1,2);
        th1=new Threewheeler("TN74 54321", 4,3);
        f1=new Fourwheeler("TN34 45677",5,4);
        t1.display();
        th1.display();
        f1.display();
    }
}
