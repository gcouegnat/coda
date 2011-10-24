#ifndef ARRAY_H
#define ARRAY_H

namespace coda {

template <typename T>
class Array {
  public:

    typedef T*  iterator;
    typedef const T* const_iterator;

    Array() : m_size(0), m_data(0) {
      coda_extra_debug_funcname();
    }

    explicit Array(uint n) : m_size(0), m_data(0) {
      coda_extra_debug_funcname();
      if (n > 0) {
        resize(n);
      }
    }

    ~Array() {
      coda_extra_debug_funcname();
      if (m_size > 0) {
        delete [] m_data;
      }
    }

    uint size() const {
      return m_size;
    }

    inline void resize(uint n) {
      coda_extra_debug_funcname();
      if (m_size > 0) {
        delete [] m_data;
      }
      m_size = n;
      m_data = new T[n];
    }

    const T& operator[](uint i) const {
      coda_debug_assert((i < m_size), "const Array::operator[] trying to access out of bounds");
      return m_data[i];
    }

    T& operator[](uint i) {
      coda_debug_assert((i < m_size), "Array::operator[] trying to access out of bounds");
      return m_data[i];
    }

    iterator begin() const {
      return m_data;
    }

    iterator end() const {
      return m_data + m_size;
    }



  private:
    uint m_size;
    T*   m_data;


};




}    // namespace coda

#endif /* ARRAY_H */
