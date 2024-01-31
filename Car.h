#include <string>

class Car {
private:
    std::string model;
public:
    /**
     * Default constructor. 
     */
    Car();

    /**
     * Big-Five: Destructor. 
     */
    ~Car();

    /**
     * Big-Five: Copy constructor.
     * @param other the source Car object of which we are copying in 
     * the creation of a this Car.
     */
    Car(const Car& other);

    /**
     * Big-Five: Copy assignment operator
     * @param rhs the source Car object of whose attributes we are copying 
     * into this Car.
     * @return a reference to this Car.
     */
    Car & operator=(const Car& rhs);

    /**
     * Start this Car. 
     */
    void start();

    /**
     * Make this Car go faster. 
     */
    void accelerate();

    /**
     * Stop this Car. 
     */
    void stop();
};