#ifndef BODY_H
#define BODY_H



class body
{
    public:
        body();
        virtual ~body();

    protected:

    private:
        size_t txn_count_;
        List<transaction> txns_;

};

#endif // BODY_H
