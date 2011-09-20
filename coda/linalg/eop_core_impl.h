using namespace coda;

template <typename eop_type>
template <typename T1, typename T2> 
inline void  eop_core<eop_type>::apply(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op)
{
		coda_debug_sigprint();
		
		typedef typename T1::elem_type eT;
		const uint nrows = op.nrows();
		const uint ncols = op.ncols();
		const uint nelem = op.nelem();
			
		out.resize(nelem);
		eT* out_mem = out.memptr();
	
		const Proxy<T1>& lhs = op.lhs;
		const Proxy<T2>& rhs = op.rhs;
		
		for(uint i=0; i<nelem; ++i)
		{
			out_mem[i] = eop_type::process(lhs[i], rhs[i]);
		}
}

template <typename eop_type>
template <typename T1, typename T2> 
inline void  eop_core<eop_type>::apply_inplace_plus(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op)
{
		coda_debug_sigprint();
		
		typedef typename T1::elem_type eT;
		const uint nrows = op.nrows();
		const uint ncols = op.ncols();
		const uint nelem = op.nelem();
			
		out.resize(nelem);
		eT* out_mem = out.memptr();
	
		const Proxy<T1>& lhs = op.lhs;
		const Proxy<T2>& rhs = op.rhs;
		
		for(uint i=0; i<nelem; ++i)
		{
			out_mem[i] += eop_type::process(lhs[i], rhs[i]);
		}
}

template <typename eop_type>
template <typename T1, typename T2> 
inline void  eop_core<eop_type>::apply_inplace_minus(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op)
{
		coda_debug_sigprint();
		
		typedef typename T1::elem_type eT;
		const uint nrows = op.nrows();
		const uint ncols = op.ncols();
		const uint nelem = op.nelem();
			
		out.resize(nelem);
		eT* out_mem = out.memptr();
	
		const Proxy<T1>& lhs = op.lhs;
		const Proxy<T2>& rhs = op.rhs;
		
		for(uint i=0; i<nelem; ++i)
		{
			out_mem[i] -= eop_type::process(lhs[i], rhs[i]);
		}
}

template <typename eop_type>
template <typename T1, typename T2> 
inline void  eop_core<eop_type>::apply_inplace_schur(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op)
{
		coda_debug_sigprint();
		
		typedef typename T1::elem_type eT;
		const uint nrows = op.nrows();
		const uint ncols = op.ncols();
		const uint nelem = op.nelem();
			
		out.resize(nelem);
		eT* out_mem = out.memptr();
	
		const Proxy<T1>& lhs = op.lhs;
		const Proxy<T2>& rhs = op.rhs;
		
		for(uint i=0; i<nelem; ++i)
		{
			out_mem[i] *= eop_type::process(lhs[i], rhs[i]);
		}
}

template <typename eop_type>
template <typename T1, typename T2> 
inline void  eop_core<eop_type>::apply_inplace_div(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op)
{
		coda_debug_sigprint();
		
		typedef typename T1::elem_type eT;
		const uint nrows = op.nrows();
		const uint ncols = op.ncols();
		const uint nelem = op.nelem();
			
		out.resize(nelem);
		eT* out_mem = out.memptr();
	
		const Proxy<T1>& lhs = op.lhs;
		const Proxy<T2>& rhs = op.rhs;
		
		for(uint i=0; i<nelem; ++i)
		{
			out_mem[i] /= eop_type::process(lhs[i], rhs[i]);
		}
}


template <typename eop_type>
template <typename eT>
inline eT eop_core<eop_type>::process(const eT a, const eT b)
{
	error("eop_core::process(): unknown eop_type");
}

template<> template<typename eT> const inline eT eop_core<eop_plus >::process(const eT a, const eT b) { return a + b; }
template<> template<typename eT> const inline eT eop_core<eop_minus>::process(const eT a, const eT b) { return a - b; }
template<> template<typename eT> const inline eT eop_core<eop_schur>::process(const eT a, const eT b) { return a * b; }
template<> template<typename eT> const inline eT eop_core<eop_div  >::process(const eT a, const eT b) { return a / b; }
