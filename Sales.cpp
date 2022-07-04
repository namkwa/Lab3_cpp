class Sales {
private:
    float sales_last_3_months[3];
public:
    Sales(float sales_last_3_months[3]) {
        this->sales_last_3_months[0] = *sales_last_3_months;
    }

    Sales(const Sales& sales) {
        sales_last_3_months[0] = *sales.sales_last_3_months;
    }
};

