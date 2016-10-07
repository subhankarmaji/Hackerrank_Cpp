//Implement the class Box  
class Box{
//l,b,h are integers representing the dimensions of the box
    long l,b,h;
// The class should have the following functions : 
    public:
// Constructors:         
// Box();
        Box(){
            l=b=h=0;
            ++BoxesCreated;
        }
// Box(int,int,int);
        Box(int length, int breadth, int height){
            l=length, b=breadth, h=height;
            ++BoxesCreated;
        }
// Box(Box);
        Box(Box  &B){
            l = B.l;
            b = B.b;
            h = B.h;
            ++BoxesCreated;
        }
// Destructor
// ~Box()
        ~Box(){
            ++BoxesDestroyed;
        }
// {

// }

// int getLength(); // Return box's length
        int getLength(){
            return l;
        }
        
// int getBreadth (); // Return box's breadth
        int getBreadth(){
            return b;
        }
// int getHeight ();  //Return box's height
        int getHeight(){
            return h;
        }
// long long CalculateVolume(); // Return the volume of the box
        long long CalculateVolume(){
            long long volume = 1;
            volume *= l;
            volume *= b;
            volume *= h;
            return volume;
        }
//Overload operator < as specified
//bool operator<(Box &b)
        bool operator< (Box & B){
            if(l < B.l) return true;
            if(b < B.b && l == B.l) return true;
            if(h < B.h && l == B.l && b == B.b) return true;
            return false;
        }
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box B)
        friend ostream& operator<< (ostream& out, Box B){
            out << B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
            return out;
        }

};
