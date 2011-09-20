using namespace coda;

template <>
template <typename T1, typename T2> 
inline void  eop_core<eop_plus>::apply(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_plus>& op)
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
			out_mem[i] = lhs[i] + rhs[i];
		}
}

template <>
template <typename T1, typename T2> 
inline void  eop_core<eop_minus>::apply(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_minus>& op)
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
			out_mem[i] = lhs[i] - rhs[i];
		}
}

template <>
template <typename T1, typename T2> 
inline void  eop_core<eop_schur>::apply(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_schur>& op)
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
			out_mem[i] = lhs[i] * rhs[i];
		}
}

template <>
template <typename T1, typename T2> 
inline void  eop_core<eop_div>::apply(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_div>& op)
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
			out_mem[i] = lhs[i] / rhs[i];
		}
}


