#ifndef HEADER_H
#define HEADER_H


class header
{

    private:
        std::string prev_block_;
        std::string txns_hash_;
        unsigned char bits_;
        unsigned int nonce_;
        
    public:
        header();
        virtual ~header();

    



};

#endif // HEADER_H
