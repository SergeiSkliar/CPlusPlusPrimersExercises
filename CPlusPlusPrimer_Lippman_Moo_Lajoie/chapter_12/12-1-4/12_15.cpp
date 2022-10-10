#include <memory>
#include <iostream>

struct destination
{
    unsigned id;
    explicit destination(unsigned dest_id = 0) : id(dest_id) {}
};

struct connection
{
    destination* dest;
};

connection connect(destination *dest)
{
    connection newConnection;
    newConnection.dest = dest;
    std::cout << "Setup new connection " << newConnection.dest->id << std::endl;
    return newConnection;
}

void disconnect(connection con)
{
    std::cout << "Stop connection to " << con.dest->id << std::endl;
}

void f(destination &d)
{
    connection c = connect(&d);
    std::shared_ptr<connection> p(&c, [](connection *p) { disconnect(*p); });
    std::cout << "Using connection " << c.dest->id << std::endl;
}

int main()
{
    destination d(2);
    f(d);
}