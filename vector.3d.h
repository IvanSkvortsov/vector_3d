#ifndef __VECTOR_3D_H__
#define __VECTOR_3D_H__

//#define __VECTOR_3D__INLINE inline
#define __VECTOR_3D__INLINE

//#define __VECTOR_3D_LOG

template<typename T>
struct vector_3d
{
public:
	typedef T value_type;
	typedef T * pointer;
	typedef T const * const_pointer;
	typedef T & reference;
	typedef T const & const_reference;
	typedef T float_type;
protected:
	T _data[3];
	template<typename U>
	__VECTOR_3D__INLINE void log(const char * _method)const;
	__VECTOR_3D__INLINE void log(const char * _method)const;
public:
	__VECTOR_3D__INLINE vector_3d();
	__VECTOR_3D__INLINE ~vector_3d();
	template<typename U>
	__VECTOR_3D__INLINE vector_3d( U const & _x, U const & _y, U const & _z );
	__VECTOR_3D__INLINE vector_3d( T const & _x, T const & _y, T const & _z );
	template<typename U>
	__VECTOR_3D__INLINE vector_3d( U const * v );
	__VECTOR_3D__INLINE vector_3d( T const * v );
	template<typename U>
	__VECTOR_3D__INLINE vector_3d( vector_3d<U> const & v );
	__VECTOR_3D__INLINE vector_3d( vector_3d<T> const & v );

	template<typename U>
	__VECTOR_3D__INLINE vector_3d<T> & operator=( vector_3d<U> const & v );
	__VECTOR_3D__INLINE vector_3d<T> & operator=( vector_3d<T> const & v );
	template<typename U>
	__VECTOR_3D__INLINE vector_3d<T> & operator=( U const * v );
	__VECTOR_3D__INLINE vector_3d<T> & operator=( T const * v );

	__VECTOR_3D__INLINE const_pointer data()const;
	__VECTOR_3D__INLINE pointer data();
	__VECTOR_3D__INLINE const_reference operator[](int i)const;
	__VECTOR_3D__INLINE reference operator[](int i);
	__VECTOR_3D__INLINE const_reference x()const;
	__VECTOR_3D__INLINE const_reference y()const;
	__VECTOR_3D__INLINE const_reference z()const;
	__VECTOR_3D__INLINE reference x();
	__VECTOR_3D__INLINE reference y();
	__VECTOR_3D__INLINE reference z();

	__VECTOR_3D__INLINE value_type sqr()const;
	__VECTOR_3D__INLINE void sqr(reference __sqr)const;

	__VECTOR_3D__INLINE value_type len()const;
	__VECTOR_3D__INLINE void len(reference __len)const;

	__VECTOR_3D__INLINE vector_3d<T> & neg();
	__VECTOR_3D__INLINE void neg( vector_3d<T> & v)const;

	__VECTOR_3D__INLINE vector_3d<T> & norm();
	__VECTOR_3D__INLINE void norm( vector_3d<T> & v )const;

	template<typename U>
	__VECTOR_3D__INLINE vector_3d<T> & operator+=( vector_3d<U> const & v );
	__VECTOR_3D__INLINE vector_3d<T> & operator+=( vector_3d<T> const & v );
	template<typename U>
	__VECTOR_3D__INLINE vector_3d<T> & operator-=( vector_3d<U> const & v );
	__VECTOR_3D__INLINE vector_3d<T> & operator-=( vector_3d<T> const & v );
	template<typename U>
	__VECTOR_3D__INLINE vector_3d<T> & operator*=( U const & v );
	__VECTOR_3D__INLINE vector_3d<T> & operator*=( T const & v );
	template<typename U>
	__VECTOR_3D__INLINE vector_3d<T> & operator/=( U const & v );
	__VECTOR_3D__INLINE vector_3d<T> & operator/=( T const & v );
	__VECTOR_3D__INLINE vector_3d<T> operator-()const;

	__VECTOR_3D__INLINE static value_type scalar(vector_3d<T> const & lhs, vector_3d<T> const & rhs);
	__VECTOR_3D__INLINE static void scalar(T & __result, vector_3d<T> const & lhs, vector_3d<T> const & rhs);
	__VECTOR_3D__INLINE value_type scalar( vector_3d<T> const & v)const;
	__VECTOR_3D__INLINE void scalar( T & _result, vector_3d<T> const & v)const;
};

template<typename T, typename U> __VECTOR_3D__INLINE vector_3d<T> operator+( vector_3d<T> const & lhs, vector_3d<U> const & rhs);
template<typename T> __VECTOR_3D__INLINE vector_3d<T> operator+( vector_3d<T> const & lhs, vector_3d<T> const & rhs);

template<typename T, typename U> __VECTOR_3D__INLINE vector_3d<T> operator-( vector_3d<T> const & lhs, vector_3d<U> const & rhs);
template<typename T> __VECTOR_3D__INLINE vector_3d<T> operator-( vector_3d<T> const & lhs, vector_3d<T> const & rhs);

template<typename T> __VECTOR_3D__INLINE vector_3d<T> operator*( vector_3d<T> const & lhs, T const & rhs);
template<typename T, typename U> __VECTOR_3D__INLINE vector_3d<T> operator*( vector_3d<T> const & lhs, U const & rhs);
template<typename T> __VECTOR_3D__INLINE vector_3d<T> operator/( vector_3d<T> const & lhs, T const & rhs);
template<typename T, typename U> __VECTOR_3D__INLINE vector_3d<T> operator/( vector_3d<T> const & lhs, U const & rhs);

#endif//__VECTOR_3D_H__
