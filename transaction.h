#ifndef TRANSACTION_H
#define TRANSACTION_H

class transaction
{
    public:
        transaction();
        virtual ~transaction();

    protected:

    private:
        int n_tx_in_;
        int n_tx_out_;
        List<output> lstOutput;
        List<input> lstInput;

};

#endif // TRANSACTION_H
