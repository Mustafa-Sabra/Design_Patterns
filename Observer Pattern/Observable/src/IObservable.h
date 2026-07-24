#ifndef IOBSERVABLE_H
#define IOBSERVABLE_H

#include <memory>
#include <vector>

class IObserver;

class IObservable
{
protected:
    // Protected destructor to prevent deletion through this interface.

    std::vector<std::weak_ptr<IObserver>> observers;

public:
    virtual void addObserver(std::shared_ptr<IObserver> observer) = 0;
    virtual void removebserver(std::shared_ptr<IObserver> observer) = 0;
    virtual void notify() = 0;
};

#endif