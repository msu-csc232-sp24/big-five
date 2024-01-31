class IntCell 
{
public:
    explicit IntCell(int initValue = 0 );
    int read() const;
    void write(int x);
private:
    // Data member is a pointer; default big-five won't work
    int *storedValue;
};
