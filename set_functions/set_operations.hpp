#include <set>

template<class T>
const std::set<T> operator+(std::set<T>& a, std::set<T>& b){
    std::set<T> result;
    for (auto iter = a.begin(); iter != a.end(); iter++)
        result.insert(*iter);
    for(auto iter = b.begin(); iter != b.end(); iter++)
        if(result.find(*iter) != b.end())
            result.insert(*iter);
    return result;
}

template<class T>
const std::set<T> operator-(std::set<T>& a, std::set<T>& b){
    std::set<T> result;
    for (auto iter = a.begin(); iter != a.end(); ++iter)
        if(b.find(*iter) == b.end())
            result.insert(*iter);   
    return result;
}

const std::set<int> operator^(const std::set<int>& a,const std::set<int>& b){
    std::set<int> result;
    for (auto s : a)
        result.insert(s);
    for (auto s : b){
    	if (result.count(s) == 0)
            result.insert(s);
        else
            result.erase(s);
    }
    return result;
}

template<class T>
const std::set<T> operator*(const std::set<T>& a,const std::set<T>& b){
    std::set<T> result;
    for (auto s : a){
        for (auto sum : b)
    	    result.insert(s + sum);
    }
    return result;
}

const std::set<int> operator^(const std::set<int>& a,const int n){
    std::set<int> result = a;
    for(int i = 1; i < n; i++)
        result = result * a;
    return result;
}

const std::set<std::string> operator^(const std::set<std::string>& a,const int n){
    if(n < 0)
        throw std::invalid_argument( "Negative value !" );
    if(n == 0)
        return std::set<std::string>{""};
    std::set<std::string> result = a;
    for(int i = 1; i < n; i++)
        result = result * a;
    return result;
}
