#include<iostream>
#include<vector>

using namespace std;

typedef string bignum_str;
typedef vector < int > bignum_vec;

void fix(bignum_vec &number)
{
    /* 
        Thêm chữ số 0 vào cuối vector (thực tế là thêm vào đầu số). 
        Chỗ này để xử lý trường hợp nếu kết quả cuối cùng có thêm 
        một chữ số ở đầu tiên do biến nhớ dư.
    */
    number.push_back(0);
    
    for (int i = 0; i < number.size() - 1; ++i)
    {
        number[i + 1] += (number[i] / 10); 
        // Hàng trước cộng thêm nhớ của hàng sau.
        number[i] %= 10; 
        // Hàng hiện tại chỉ lưu chữ số cuối cùng của tổng hàng.
        
        if (number[i] < 0) 
        // Nếu hàng hiện tại bị âm thì mượn thêm từ hàng sau.
        {
            number[i] += 10;
            --number[i - 1];
        }
    }
    
    // Xóa chữ số 0 vô nghĩa ở đầu kết quả phép toán.
    while (number.size() > 1 && number.back() == 0)
        number.pop_back();
}

istream &operator >> (istream &cin, bignum_vec &number)
{
    string s;
    cin >> s;

    number.clear();
    for (int i = s.size() - 1; i >= 0; --i)
        number.push_back(s[i] - '0');

    return number, cin;
}

ostream &operator << (ostream &cout, bignum_vec &number)
{
    cout << number.back();

    for (int i = number.size() - 2; i >= 0; --i)
        cout << number[i];

    return cout;
}

// so sánh 2 số
bool operator < (const bignum_vec &a, const bignum_vec &b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
        
    for (int i = a.size() - 1; i >= 0; --i)
        if (a[i] != b[i])
            return a[i] < b[i];
            
    return false;
}

bool operator == (const bignum_vec &a, const bignum_vec &b)
{
    if (a.size() != b.size())
        return false;
        
    for (int i = a.size() - 1; i >= 0; --i)
        if (a[i] != b[i])
            return false;
            
    return true;
}

// cộng 2 số lớn
bignum_vec operator + (bignum_vec a, bignum_vec b)
{
    // Kết quả phép cộng sẽ gán thẳng vào số a, ta resize trước cho nó.
    a.resize(max(a.size(), b.size()), 0);
    
    for (int i = 0; i < b.size(); ++i)
        a[i] += b[i];
    
    fix(a);
    
    return a;
}

// bignum_str add(bignum_str a, bignum_str b)
// {
//     equal_length(a, b);
    
//     int carry = 0;
//     bignum_str res;
//     for (int i = a.size() - 1; i >= 0; --i)
//     {
//         // Cộng hai chữ số cùng hàng và thêm biến nhớ từ hàng bên phải dồn lên.
//         int d = (a[i] - '0') + (b[i] - '0') + carry;
        
//         carry = d / 10; // Biến nhớ bằng kết quả hàng trước chia 10.
//         res = (char)(d % 10 + '0') + res; // Viết chữ số cuối của kết quả.
//     }
    
//     if (carry)
//         res = '1' + res;
        
//     return res;
// }


// nhân 2 số lớn
bignum_vec operator * (bignum_vec a, bignum_vec b)
{
    // Resize trước mảng kết quả. Kết quả của thương có thể đạt tới số chữ số bằng tổng độ 
    // dài của hai số ban đầu cộng lại và cộng thêm 1.
    bignum_vec product(a.size() + b.size() + 1, 0);

    for (int i = 0; i < a.size(); ++i)
        for (int j = 0; j < b.size(); ++j)
        {
            product[i + j] += (a[i] * b[j]);
            product[i + j + 1] += (product[i + j] / 10);
            product[i + j] %= 10;
        }

    fix(product);

    return product;
}

void Dost()
{
    // Khi nhập xuất thì khai báo biến kiểu bignum_vec và dùng trực tiếp lệnh cin, cout.
    bignum_vec a, b;
    cin >> a >> b;
    bignum_vec n = a+b;
    cout<<n<<endl;
}

int main()
{
    int test;
    cin>>test;
    while(test--){
        Dost();
    }
    return 0;
}