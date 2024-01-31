/**
 * IntCell with Big-Five written. 
 */
class IntCell 
{
public:
    explicit IntCell(int initValue = 0 );
    
    /* The Big-Five */
    /**
     * Destructor 
     */
    ~IntCell();

    /**
     * Copy constructor.
     */
    IntCell( const IntCell& rhs);

    /**
     * Move constructor. 
     */
    IntCell( IntCell&& rhs);

    /**
     * Copy assignment operator. 
     */
    IntCell& operator=( const IntCell& rhs);

    /**
     * Move assignment operator. 
     */
    IntCell& operator=( IntCell&& rhs);

    int read() const;
    void write(int x);
private:
    // Data member is a pointer; default big-five won't work
    int *storedValue;
};
