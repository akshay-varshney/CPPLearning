// Composition Example
// The class that contains the object is called the "containing" or "composite" class, while the class being included is called the "component" or "composed" class. 
//The containing class controls the lifetime and behavior of the component class.

class Design
{
public:
    void Book()
    {
        std::cout<<"Head First"<<std::endl;
    }
    
    void Price()
    {
        std::cout<<"Price of the book is: 1700RS"<<std::endl;
    }
};

class DesignPrep
{
private:
    Design design;
public:
    void whichBook()
    {
        design.Book();
    }
    void whatPrice()
    {
        design.Price();
    }
};

int main()
{
    DesignPrep designPrep;
    designPrep.whichBook();
    designPrep.whatPrice();

}
