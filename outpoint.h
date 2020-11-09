#ifndef OUTPOINT_H
#define OUTPOINT_H


class outpoint
{
    public:
        outpoint();
        virtual ~outpoint();

    protected:

    private:
        std::string tx_id_;
        unsigned int idx_;
        std::string addr_;
};

#endif // OUTPOINT_H
