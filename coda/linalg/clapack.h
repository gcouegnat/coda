// Headers from CLAPACK, downloaded at http://www.netlib.org/clapack/.

// Replacements:
//    integer       --> LAPACK_INTEGER
//    real          --> LAPACK_REAL
//    doublereal    --> LAPACK_DOUBLEREAL
//    complex       --> LAPACK_COMPLEX
//    doublecomplex --> LAPACK_DOUBLECOMPLEX
//    logical       --> LAPACK_LOGICAL
//    L_fp          --> LAPACK_L_FP
//    ftnlen        --> LAPACK_FTNLEN

extern "C" {

  typedef int LAPACK_INTEGER;
  typedef float LAPACK_REAL;
  typedef double LAPACK_DOUBLEREAL;
  typedef struct { LAPACK_REAL r,i; } LAPACK_COMPLEX;    
  typedef struct { LAPACK_DOUBLEREAL r,i; } LAPACK_DOUBLECOMPLEX;
  typedef int LAPACK_LOGICAL;
  typedef LAPACK_LOGICAL (*LAPACK_L_FP)();
  typedef int LAPACK_FTNLEN;

  int cbdsqr_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ncvt, LAPACK_INTEGER *
              nru, LAPACK_INTEGER *ncc, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_COMPLEX *vt, LAPACK_INTEGER *ldvt, 
              LAPACK_COMPLEX *u, LAPACK_INTEGER *ldu, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int cgbbrd_(char *vect, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *ncc,
              LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *d__, 
              LAPACK_REAL *e, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_COMPLEX *pt, LAPACK_INTEGER *ldpt, 
              LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgbcon_(char *norm, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_REAL *anorm, LAPACK_REAL *rcond, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgbequ_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *rowcnd, LAPACK_REAL 
              *colcnd, LAPACK_REAL *amax, LAPACK_INTEGER *info);

  int cgbrfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *
              ku, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *afb, LAPACK_INTEGER *
              ldafb, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *
              ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *
              info);

  int cgbsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_INTEGER *
             nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *
             ldb, LAPACK_INTEGER *info);

  int cgbsvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl,
              LAPACK_INTEGER *ku, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *afb,
              LAPACK_INTEGER *ldafb, LAPACK_INTEGER *ipiv, char *equed, LAPACK_REAL *r__, LAPACK_REAL *c__, 
              LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL 
              *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgbtf2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int cgbtrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int cgbtrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *
              ku, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX 
              *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cgebak_(char *job, char *side, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, 
              LAPACK_INTEGER *ihi, LAPACK_REAL *scale, LAPACK_INTEGER *m, LAPACK_COMPLEX *v, LAPACK_INTEGER *ldv, 
              LAPACK_INTEGER *info);

  int cgebal_(char *job, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *scale, LAPACK_INTEGER *info);

  int cgebd2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_COMPLEX *tauq, LAPACK_COMPLEX *taup, LAPACK_COMPLEX *work, 
              LAPACK_INTEGER *info);

  int cgebrd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_COMPLEX *tauq, LAPACK_COMPLEX *taup, LAPACK_COMPLEX *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cgecon_(char *norm, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgeequ_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *rowcnd, LAPACK_REAL *colcnd, LAPACK_REAL *amax, 
              LAPACK_INTEGER *info);

  int cgees_(char *jobvs, char *sort, LAPACK_L_FP select, LAPACK_INTEGER *n, 
             LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *sdim, LAPACK_COMPLEX *w, LAPACK_COMPLEX *vs, 
             LAPACK_INTEGER *ldvs, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_LOGICAL *
             bwork, LAPACK_INTEGER *info);

  int cgeesx_(char *jobvs, char *sort, LAPACK_L_FP select, char *
              sense, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *sdim, LAPACK_COMPLEX *
              w, LAPACK_COMPLEX *vs, LAPACK_INTEGER *ldvs, LAPACK_REAL *rconde, LAPACK_REAL *rcondv, LAPACK_COMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int cgeev_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
             LAPACK_INTEGER *lda, LAPACK_COMPLEX *w, LAPACK_COMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_COMPLEX *vr, 
             LAPACK_INTEGER *ldvr, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *
             info);

  int cgeevx_(char *balanc, char *jobvl, char *jobvr, char *
              sense, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *w, LAPACK_COMPLEX *vl, 
              LAPACK_INTEGER *ldvl, LAPACK_COMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi,
              LAPACK_REAL *scale, LAPACK_REAL *abnrm, LAPACK_REAL *rconde, LAPACK_REAL *rcondv, LAPACK_COMPLEX *work, 
              LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgegs_(char *jobvsl, char *jobvsr, LAPACK_INTEGER *n, LAPACK_COMPLEX *
             a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *
             beta, LAPACK_COMPLEX *vsl, LAPACK_INTEGER *ldvsl, LAPACK_COMPLEX *vsr, LAPACK_INTEGER *ldvsr, 
             LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgegv_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
             LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *beta,
             LAPACK_COMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_COMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_COMPLEX *
             work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgehd2_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cgehrd_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER 
              *info);

  int cgelq2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cgelqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cgels_(char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *
             nrhs, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *
             work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cgelsx_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *jpvt, LAPACK_REAL *rcond,
              LAPACK_INTEGER *rank, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgelsy_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *jpvt, LAPACK_REAL *rcond,
              LAPACK_INTEGER *rank, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *
              info);

  int cgeql2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cgeqlf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cgeqp3_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *jpvt, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *
              rwork, LAPACK_INTEGER *info);

  int cgeqpf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *jpvt, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *
              info);

  int cgeqr2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cgeqrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cgerfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *
              b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgerq2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cgerqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cgesc2_(LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *
              rhs, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *jpiv, LAPACK_REAL *scale);

  int cgesv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *a, LAPACK_INTEGER *
             lda, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cgesvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *
              ipiv, char *equed, LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgetc2_(LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *
              ipiv, LAPACK_INTEGER *jpiv, LAPACK_INTEGER *info);

  int cgetf2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int cgetrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int cgetri_(LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *
              ipiv, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cgetrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int cggbak_(char *job, char *side, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, 
              LAPACK_INTEGER *ihi, LAPACK_REAL *lscale, LAPACK_REAL *rscale, LAPACK_INTEGER *m, LAPACK_COMPLEX *v, 
              LAPACK_INTEGER *ldv, LAPACK_INTEGER *info);

  int cggbal_(char *job, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *lscale, 
              LAPACK_REAL *rscale, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int cgges_(char *jobvsl, char *jobvsr, char *sort, LAPACK_L_FP 
             selctg, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *
             ldb, LAPACK_INTEGER *sdim, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *beta, LAPACK_COMPLEX *vsl, 
             LAPACK_INTEGER *ldvsl, LAPACK_COMPLEX *vsr, LAPACK_INTEGER *ldvsr, LAPACK_COMPLEX *work, LAPACK_INTEGER *
             lwork, LAPACK_REAL *rwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int cggesx_(char *jobvsl, char *jobvsr, char *sort, LAPACK_L_FP 
              selctg, char *sense, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b,
              LAPACK_INTEGER *ldb, LAPACK_INTEGER *sdim, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *beta, LAPACK_COMPLEX *
              vsl, LAPACK_INTEGER *ldvsl, LAPACK_COMPLEX *vsr, LAPACK_INTEGER *ldvsr, LAPACK_REAL *rconde, LAPACK_REAL 
              *rcondv, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int cggev_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
             LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *beta,
             LAPACK_COMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_COMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_COMPLEX *
             work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cggevx_(char *balanc, char *jobvl, char *jobvr, char *
              sense, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb,
              LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *beta, LAPACK_COMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_COMPLEX *
              vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *lscale, LAPACK_REAL *
              rscale, LAPACK_REAL *abnrm, LAPACK_REAL *bbnrm, LAPACK_REAL *rconde, LAPACK_REAL *rcondv, LAPACK_COMPLEX 
              *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, LAPACK_LOGICAL *bwork, 
              LAPACK_INTEGER *info);

  int cggglm_(LAPACK_INTEGER *n, LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *d__, LAPACK_COMPLEX *x, 
              LAPACK_COMPLEX *y, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cgghrd_(char *compq, char *compz, LAPACK_INTEGER *n, LAPACK_INTEGER *
              ilo, LAPACK_INTEGER *ihi, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb,
              LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *info);

  int cgglse_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *p, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *c__, LAPACK_COMPLEX *d__, 
              LAPACK_COMPLEX *x, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cggqrf_(LAPACK_INTEGER *n, LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *taua, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *taub, 
              LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cggrqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *taua, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *taub, 
              LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cggsvd_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_INTEGER *p, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_COMPLEX *a, LAPACK_INTEGER *
              lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_REAL *alpha, LAPACK_REAL *beta, LAPACK_COMPLEX *u, 
              LAPACK_INTEGER *ldu, LAPACK_COMPLEX *v, LAPACK_INTEGER *ldv, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int cggsvp_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER 
              *ldb, LAPACK_REAL *tola, LAPACK_REAL *tolb, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_COMPLEX *u, 
              LAPACK_INTEGER *ldu, LAPACK_COMPLEX *v, LAPACK_INTEGER *ldv, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, 
              LAPACK_INTEGER *iwork, LAPACK_REAL *rwork, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *
              info);

  int cgtcon_(char *norm, LAPACK_INTEGER *n, LAPACK_COMPLEX *dl, LAPACK_COMPLEX *
              d__, LAPACK_COMPLEX *du, LAPACK_COMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_REAL *anorm, LAPACK_REAL *
              rcond, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cgtrfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              dl, LAPACK_COMPLEX *d__, LAPACK_COMPLEX *du, LAPACK_COMPLEX *dlf, LAPACK_COMPLEX *df, LAPACK_COMPLEX *
              duf, LAPACK_COMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *
              x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int cgtsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *dl, LAPACK_COMPLEX *
             d__, LAPACK_COMPLEX *du, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cgtsvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *dl, LAPACK_COMPLEX *d__, LAPACK_COMPLEX *du, LAPACK_COMPLEX *dlf, LAPACK_COMPLEX *
              df, LAPACK_COMPLEX *duf, LAPACK_COMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *
              ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cgttrf_(LAPACK_INTEGER *n, LAPACK_COMPLEX *dl, LAPACK_COMPLEX *d__, LAPACK_COMPLEX *
              du, LAPACK_COMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int cgttrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              dl, LAPACK_COMPLEX *d__, LAPACK_COMPLEX *du, LAPACK_COMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *
              b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cgtts2_(LAPACK_INTEGER *itrans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_COMPLEX *dl, LAPACK_COMPLEX *d__, LAPACK_COMPLEX *du, LAPACK_COMPLEX *du2, LAPACK_INTEGER *ipiv, 
              LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb);

  int chbev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
             LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, 
             LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int chbevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int chbevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, 
              LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, LAPACK_INTEGER *
              m, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int chbgst_(char *vect, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
              LAPACK_INTEGER *kb, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *bb, LAPACK_INTEGER *ldbb, 
              LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int chbgv_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
             LAPACK_INTEGER *kb, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *bb, LAPACK_INTEGER *ldbb, 
             LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
             LAPACK_INTEGER *info);

  int chbgvx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ka, LAPACK_INTEGER *kb, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *bb, 
              LAPACK_INTEGER *ldbb, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *
              il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_COMPLEX *z__, 
              LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              ifail, LAPACK_INTEGER *info);

  int chbtrd_(char *vect, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_COMPLEX *q, LAPACK_INTEGER *
              ldq, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int checon_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_INTEGER *
              info);

  int cheev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
             LAPACK_INTEGER *lda, LAPACK_REAL *w, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, 
             LAPACK_INTEGER *info);

  int cheevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *w, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *lrwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int cheevr_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *
              iu, LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_INTEGER *isuppz, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *
              lrwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int cheevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *
              iu, LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              ifail, LAPACK_INTEGER *info);

  int chegs2_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int chegst_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int chegv_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
             n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_REAL *w, 
             LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int chegvd_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
              n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_REAL *w, 
              LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int chegvx_(LAPACK_INTEGER *itype, char *jobz, char *range, char *
              uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, LAPACK_INTEGER *
              m, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int cherfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *
              b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int chesv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *a,
             LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *work,
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int chesvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *
              ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond,
              LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int chetf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int chetrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int chetrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int chetri_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int chetrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int chgeqz_(char *job, char *compq, char *compz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *beta, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq,
              LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *
              rwork, LAPACK_INTEGER *info);

  int chpcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_INTEGER *
              ipiv, LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int chpev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, 
             LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
             LAPACK_INTEGER *info);

  int chpevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, 
              LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, 
              LAPACK_REAL *rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, 
              LAPACK_INTEGER *info);

  int chpevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *ap, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *
              abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *
              work, LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int chpgst_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *
              ap, LAPACK_COMPLEX *bp, LAPACK_INTEGER *info);

  int chpgv_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
             n, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *bp, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, 
             LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int chpgvd_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
              n, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *bp, LAPACK_REAL *w, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int chpgvx_(LAPACK_INTEGER *itype, char *jobz, char *range, char *
              uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *bp, LAPACK_REAL *vl, LAPACK_REAL *vu, 
              LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_COMPLEX *
              z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int chprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              ap, LAPACK_COMPLEX *afp, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x,
              LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int chpsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
             ap, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int chpsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *afp, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *
              ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int chptrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_REAL *d__, 
              LAPACK_REAL *e, LAPACK_COMPLEX *tau, LAPACK_INTEGER *info);

  int chptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_INTEGER *
              ipiv, LAPACK_INTEGER *info);

  int chptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_INTEGER *
              ipiv, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int chptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              ap, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int chsein_(char *side, char *eigsrc, char *initv, LAPACK_LOGICAL *
              select, LAPACK_INTEGER *n, LAPACK_COMPLEX *h__, LAPACK_INTEGER *ldh, LAPACK_COMPLEX *w, LAPACK_COMPLEX *
              vl, LAPACK_INTEGER *ldvl, LAPACK_COMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER *
              m, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *ifaill, LAPACK_INTEGER *ifailr, 
              LAPACK_INTEGER *info);

  int chseqr_(char *job, char *compz, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo,
              LAPACK_INTEGER *ihi, LAPACK_COMPLEX *h__, LAPACK_INTEGER *ldh, LAPACK_COMPLEX *w, LAPACK_COMPLEX *z__, 
              LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int clabrd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_COMPLEX *tauq, LAPACK_COMPLEX *taup, 
              LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_COMPLEX *y, LAPACK_INTEGER *ldy);

  int clacgv_(LAPACK_INTEGER *n, LAPACK_COMPLEX *x, LAPACK_INTEGER *incx);

  int clacon_(LAPACK_INTEGER *n, LAPACK_COMPLEX *v, LAPACK_COMPLEX *x, LAPACK_REAL *est, 
              LAPACK_INTEGER *kase);

  int clacp2_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb);

  int clacpy_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb);

  int clacrm_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *rwork);

  int clacrt_(LAPACK_INTEGER *n, LAPACK_COMPLEX *cx, LAPACK_INTEGER *incx, LAPACK_COMPLEX *
              cy, LAPACK_INTEGER *incy, LAPACK_COMPLEX *c__, LAPACK_COMPLEX *s);

  int claed0_(LAPACK_INTEGER *qsiz, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_COMPLEX *qstore, LAPACK_INTEGER *ldqs, LAPACK_REAL *rwork,
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int claed7_(LAPACK_INTEGER *n, LAPACK_INTEGER *cutpnt, LAPACK_INTEGER *qsiz, 
              LAPACK_INTEGER *tlvls, LAPACK_INTEGER *curlvl, LAPACK_INTEGER *curpbm, LAPACK_REAL *d__, LAPACK_COMPLEX *
              q, LAPACK_INTEGER *ldq, LAPACK_REAL *rho, LAPACK_INTEGER *indxq, LAPACK_REAL *qstore, LAPACK_INTEGER *
              qptr, LAPACK_INTEGER *prmptr, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, LAPACK_INTEGER *
              givcol, LAPACK_REAL *givnum, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int claed8_(LAPACK_INTEGER *k, LAPACK_INTEGER *n, LAPACK_INTEGER *qsiz, LAPACK_COMPLEX *
              q, LAPACK_INTEGER *ldq, LAPACK_REAL *d__, LAPACK_REAL *rho, LAPACK_INTEGER *cutpnt, LAPACK_REAL *z__, 
              LAPACK_REAL *dlamda, LAPACK_COMPLEX *q2, LAPACK_INTEGER *ldq2, LAPACK_REAL *w, LAPACK_INTEGER *indxp, 
              LAPACK_INTEGER *indx, LAPACK_INTEGER *indxq, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, 
              LAPACK_INTEGER *givcol, LAPACK_REAL *givnum, LAPACK_INTEGER *info);

  int claein_(LAPACK_LOGICAL *rightv, LAPACK_LOGICAL *noinit, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *h__, LAPACK_INTEGER *ldh, LAPACK_COMPLEX *w, LAPACK_COMPLEX *v, LAPACK_COMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_REAL *rwork, LAPACK_REAL *eps3, LAPACK_REAL *smlnum, LAPACK_INTEGER *info);

  int claesy_(LAPACK_COMPLEX *a, LAPACK_COMPLEX *b, LAPACK_COMPLEX *c__, LAPACK_COMPLEX *
              rt1, LAPACK_COMPLEX *rt2, LAPACK_COMPLEX *evscal, LAPACK_COMPLEX *cs1, LAPACK_COMPLEX *sn1);

  int claev2_(LAPACK_COMPLEX *a, LAPACK_COMPLEX *b, LAPACK_COMPLEX *c__, LAPACK_REAL *rt1, 
              LAPACK_REAL *rt2, LAPACK_REAL *cs1, LAPACK_COMPLEX *sn1);

  int clags2_(LAPACK_LOGICAL *upper, LAPACK_REAL *a1, LAPACK_COMPLEX *a2, LAPACK_REAL *a3, 
              LAPACK_REAL *b1, LAPACK_COMPLEX *b2, LAPACK_REAL *b3, LAPACK_REAL *csu, LAPACK_COMPLEX *snu, LAPACK_REAL *csv, 
              LAPACK_COMPLEX *snv, LAPACK_REAL *csq, LAPACK_COMPLEX *snq);

  int clagtm_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *
              alpha, LAPACK_COMPLEX *dl, LAPACK_COMPLEX *d__, LAPACK_COMPLEX *du, LAPACK_COMPLEX *x, LAPACK_INTEGER *
              ldx, LAPACK_REAL *beta, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb);

  int clahef_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_INTEGER *kb,
              LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *w, LAPACK_INTEGER *ldw, 
              LAPACK_INTEGER *info);

  int clahqr_(LAPACK_LOGICAL *wantt, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_COMPLEX *h__, LAPACK_INTEGER *ldh, LAPACK_COMPLEX *w, 
              LAPACK_INTEGER *iloz, LAPACK_INTEGER *ihiz, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *
              info);

  int clahrd_(LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *nb, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_COMPLEX *y, 
              LAPACK_INTEGER *ldy);

  int claic1_(LAPACK_INTEGER *job, LAPACK_INTEGER *j, LAPACK_COMPLEX *x, LAPACK_REAL *sest,
              LAPACK_COMPLEX *w, LAPACK_COMPLEX *gamma, LAPACK_REAL *sestpr, LAPACK_COMPLEX *s, LAPACK_COMPLEX *c__);

  int clals0_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, 
              LAPACK_INTEGER *sqre, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *bx, 
              LAPACK_INTEGER *ldbx, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, 
              LAPACK_INTEGER *ldgcol, LAPACK_REAL *givnum, LAPACK_INTEGER *ldgnum, LAPACK_REAL *poles, LAPACK_REAL *
              difl, LAPACK_REAL *difr, LAPACK_REAL *z__, LAPACK_INTEGER *k, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_REAL *
              rwork, LAPACK_INTEGER *info);

  int clalsa_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *bx, LAPACK_INTEGER *ldbx, 
              LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *vt, LAPACK_INTEGER *k, LAPACK_REAL *difl, LAPACK_REAL *difr, 
              LAPACK_REAL *z__, LAPACK_REAL *poles, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_INTEGER *
              ldgcol, LAPACK_INTEGER *perm, LAPACK_REAL *givnum, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int clapll_(LAPACK_INTEGER *n, LAPACK_COMPLEX *x, LAPACK_INTEGER *incx, LAPACK_COMPLEX *
              y, LAPACK_INTEGER *incy, LAPACK_REAL *ssmin);

  int clapmt_(LAPACK_LOGICAL *forwrd, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX 
              *x, LAPACK_INTEGER *ldx, LAPACK_INTEGER *k);

  int claqgb_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *rowcnd, LAPACK_REAL 
              *colcnd, LAPACK_REAL *amax, char *equed);

  int claqge_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *rowcnd, LAPACK_REAL *colcnd, LAPACK_REAL *amax, char *
              equed);

  int claqhb_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab,
              LAPACK_INTEGER *ldab, LAPACK_REAL *s, LAPACK_REAL *scond, LAPACK_REAL *amax, char *equed);

  int claqhe_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *s, LAPACK_REAL *scond, LAPACK_REAL *amax, char *equed);

  int claqhp_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_REAL *s, 
              LAPACK_REAL *scond, LAPACK_REAL *amax, char *equed);

  int claqp2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *offset, LAPACK_COMPLEX 
              *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, LAPACK_COMPLEX *tau, LAPACK_REAL *vn1, LAPACK_REAL *vn2, 
              LAPACK_COMPLEX *work);

  int claqps_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *offset, LAPACK_INTEGER 
              *nb, LAPACK_INTEGER *kb, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, LAPACK_COMPLEX *
              tau, LAPACK_REAL *vn1, LAPACK_REAL *vn2, LAPACK_COMPLEX *auxv, LAPACK_COMPLEX *f, LAPACK_INTEGER *ldf);

  int claqsb_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab,
              LAPACK_INTEGER *ldab, LAPACK_REAL *s, LAPACK_REAL *scond, LAPACK_REAL *amax, char *equed);

  int claqsp_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_REAL *s, 
              LAPACK_REAL *scond, LAPACK_REAL *amax, char *equed);

  int claqsy_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *s, LAPACK_REAL *scond, LAPACK_REAL *amax, char *equed);

  int clar1v_(LAPACK_INTEGER *n, LAPACK_INTEGER *b1, LAPACK_INTEGER *bn, LAPACK_REAL *
              sigma, LAPACK_REAL *d__, LAPACK_REAL *l, LAPACK_REAL *ld, LAPACK_REAL *lld, LAPACK_REAL *gersch, LAPACK_COMPLEX 
              *z__, LAPACK_REAL *ztz, LAPACK_REAL *mingma, LAPACK_INTEGER *r__, LAPACK_INTEGER *isuppz, LAPACK_REAL *
              work);

  int clar2v_(LAPACK_INTEGER *n, LAPACK_COMPLEX *x, LAPACK_COMPLEX *y, LAPACK_COMPLEX *z__,
              LAPACK_INTEGER *incx, LAPACK_REAL *c__, LAPACK_COMPLEX *s, LAPACK_INTEGER *incc);

  int clarcm_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *rwork);

  int clarf_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *v, 
             LAPACK_INTEGER *incv, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_COMPLEX *
             work);

  int clarfb_(char *side, char *trans, char *direct, char *
              storev, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *v, LAPACK_INTEGER *ldv, 
              LAPACK_COMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, 
              LAPACK_INTEGER *ldwork);

  int clarfg_(LAPACK_INTEGER *n, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *x, LAPACK_INTEGER *
              incx, LAPACK_COMPLEX *tau);

  int clarft_(char *direct, char *storev, LAPACK_INTEGER *n, LAPACK_INTEGER *
              k, LAPACK_COMPLEX *v, LAPACK_INTEGER *ldv, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *t, LAPACK_INTEGER *ldt);

  int clarfx_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *v, 
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work);

  int clargv_(LAPACK_INTEGER *n, LAPACK_COMPLEX *x, LAPACK_INTEGER *incx, LAPACK_COMPLEX *
              y, LAPACK_INTEGER *incy, LAPACK_REAL *c__, LAPACK_INTEGER *incc);

  int clarnv_(LAPACK_INTEGER *idist, LAPACK_INTEGER *iseed, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *x);

  int clarrv_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *l, LAPACK_INTEGER *isplit, 
              LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_INTEGER *iblock, LAPACK_REAL *gersch, LAPACK_REAL *tol, 
              LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *isuppz, LAPACK_REAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int clartg_(LAPACK_COMPLEX *f, LAPACK_COMPLEX *g, LAPACK_REAL *cs, LAPACK_COMPLEX *sn, 
              LAPACK_COMPLEX *r__);

  int clartv_(LAPACK_INTEGER *n, LAPACK_COMPLEX *x, LAPACK_INTEGER *incx, LAPACK_COMPLEX *
              y, LAPACK_INTEGER *incy, LAPACK_REAL *c__, LAPACK_COMPLEX *s, LAPACK_INTEGER *incc);

  int clarz_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *l, 
             LAPACK_COMPLEX *v, LAPACK_INTEGER *incv, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, 
             LAPACK_COMPLEX *work);

  int clarzb_(char *side, char *trans, char *direct, char *
              storev, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_COMPLEX *v, 
              LAPACK_INTEGER *ldv, LAPACK_COMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, 
              LAPACK_COMPLEX *work, LAPACK_INTEGER *ldwork);

  int clarzt_(char *direct, char *storev, LAPACK_INTEGER *n, LAPACK_INTEGER *
              k, LAPACK_COMPLEX *v, LAPACK_INTEGER *ldv, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *t, LAPACK_INTEGER *ldt);

  int clascl_(char *type__, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_REAL *
              cfrom, LAPACK_REAL *cto, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *info);

  int claset_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *
              alpha, LAPACK_COMPLEX *beta, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda);

  int clasr_(char *side, char *pivot, char *direct, LAPACK_INTEGER *m,
             LAPACK_INTEGER *n, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda);

  int classq_(LAPACK_INTEGER *n, LAPACK_COMPLEX *x, LAPACK_INTEGER *incx, LAPACK_REAL *
              scale, LAPACK_REAL *sumsq);

  int claswp_(LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *
              k1, LAPACK_INTEGER *k2, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *incx);

  int clasyf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_INTEGER *kb,
              LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *w, LAPACK_INTEGER *ldw, 
              LAPACK_INTEGER *info);

  int clatbs_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *
              x, LAPACK_REAL *scale, LAPACK_REAL *cnorm, LAPACK_INTEGER *info);

  int clatdf_(LAPACK_INTEGER *ijob, LAPACK_INTEGER *n, LAPACK_COMPLEX *z__, LAPACK_INTEGER 
              *ldz, LAPACK_COMPLEX *rhs, LAPACK_REAL *rdsum, LAPACK_REAL *rdscal, LAPACK_INTEGER *ipiv, LAPACK_INTEGER 
              *jpiv);

  int clatps_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *x, LAPACK_REAL *scale, LAPACK_REAL *cnorm,
              LAPACK_INTEGER *info);

  int clatrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *e, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *w, LAPACK_INTEGER *ldw);

  int clatrs_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *x, LAPACK_REAL *scale,
              LAPACK_REAL *cnorm, LAPACK_INTEGER *info);

  int clatrz_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *l, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work);

  int clatzm_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *v, 
              LAPACK_INTEGER *incv, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c1, LAPACK_COMPLEX *c2, LAPACK_INTEGER *ldc, 
              LAPACK_COMPLEX *work);

  int clauu2_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *info);

  int clauum_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *info);

  int cpbcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab,
              LAPACK_INTEGER *ldab, LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int cpbequ_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab,
              LAPACK_INTEGER *ldab, LAPACK_REAL *s, LAPACK_REAL *scond, LAPACK_REAL *amax, LAPACK_INTEGER *info);

  int cpbrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *afb, LAPACK_INTEGER *ldafb, 
              LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *
              berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cpbstf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab,
              LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int cpbsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
             nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
             info);

  int cpbsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *afb, LAPACK_INTEGER *
              ldafb, char *equed, LAPACK_REAL *s, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, 
              LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, 
              LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cpbtf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab,
              LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int cpbtrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab,
              LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int cpbtrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int cpocon_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cpoequ_(LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_REAL *s, 
              LAPACK_REAL *scond, LAPACK_REAL *amax, LAPACK_INTEGER *info);

  int cporfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *af, LAPACK_INTEGER *ldaf, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb,
              LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, 
              LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cposv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *a,
             LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cposvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *af, LAPACK_INTEGER *ldaf, char *
              equed, LAPACK_REAL *s, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int cpotf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *info);

  int cpotrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *info);

  int cpotri_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *info);

  int cpotrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cppcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_REAL *anorm,
              LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cppequ_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_REAL *s, 
              LAPACK_REAL *scond, LAPACK_REAL *amax, LAPACK_INTEGER *info);

  int cpprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              ap, LAPACK_COMPLEX *afp, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cppsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
             ap, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cppsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *afp, char *equed, LAPACK_REAL *s, LAPACK_COMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL 
              *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cpptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_INTEGER *
              info);

  int cpptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_INTEGER *
              info);

  int cpptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              ap, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cptcon_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_COMPLEX *e, LAPACK_REAL *anorm, 
              LAPACK_REAL *rcond, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cptrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__,
              LAPACK_COMPLEX *e, LAPACK_REAL *df, LAPACK_COMPLEX *ef, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX 
              *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int cptsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__, LAPACK_COMPLEX *e, 
             LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cptsvx_(char *fact, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__,
              LAPACK_COMPLEX *e, LAPACK_REAL *df, LAPACK_COMPLEX *ef, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX 
              *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, 
              LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int cpttrf_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_COMPLEX *e, LAPACK_INTEGER *info);

  int cpttrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__,
              LAPACK_COMPLEX *e, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cptts2_(LAPACK_INTEGER *iuplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *
              d__, LAPACK_COMPLEX *e, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb);

  int crot_(LAPACK_INTEGER *n, LAPACK_COMPLEX *cx, LAPACK_INTEGER *incx, LAPACK_COMPLEX *
            cy, LAPACK_INTEGER *incy, LAPACK_REAL *c__, LAPACK_COMPLEX *s);

  int cspcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_INTEGER *
              ipiv, LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cspmv_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *
             ap, LAPACK_COMPLEX *x, LAPACK_INTEGER *incx, LAPACK_COMPLEX *beta, LAPACK_COMPLEX *y, LAPACK_INTEGER *
             incy);

  int cspr_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *x,
            LAPACK_INTEGER *incx, LAPACK_COMPLEX *ap);

  int csprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              ap, LAPACK_COMPLEX *afp, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x,
              LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int cspsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
             ap, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int cspsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *afp, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *
              ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int csptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_INTEGER *
              ipiv, LAPACK_INTEGER *info);

  int csptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_INTEGER *
              ipiv, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int csptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              ap, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int csrot_(LAPACK_INTEGER *n, LAPACK_COMPLEX *cx, LAPACK_INTEGER *incx, LAPACK_COMPLEX *
             cy, LAPACK_INTEGER *incy, LAPACK_REAL *c__, LAPACK_REAL *s);

  int csrscl_(LAPACK_INTEGER *n, LAPACK_REAL *sa, LAPACK_COMPLEX *sx, LAPACK_INTEGER *incx);

  int cstedc_(char *compz, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *
              rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *
              info);

  int cstein_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_INTEGER *m, LAPACK_REAL 
              *w, LAPACK_INTEGER *iblock, LAPACK_INTEGER *isplit, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int csteqr_(char *compz, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int csycon_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_INTEGER *
              info);

  int csymv_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *
             a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *x, LAPACK_INTEGER *incx, LAPACK_COMPLEX *beta, LAPACK_COMPLEX *y,
             LAPACK_INTEGER *incy);

  int csyr_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *x,
            LAPACK_INTEGER *incx, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda);

  int csyrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *
              b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int csysv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *a,
             LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *work,
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int csysvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *
              ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond,
              LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int csytf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int csytrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int csytri_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int csytrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int ctbcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, 
              LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int ctbrfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, 
              LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int ctbtrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_COMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int ctgevc_(char *side, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_COMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_COMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, 
              LAPACK_INTEGER *m, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int ctgex2_(LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *q, 
              LAPACK_INTEGER *ldq, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *j1, LAPACK_INTEGER *info);

  int ctgexc_(LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *q, 
              LAPACK_INTEGER *ldq, LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *ifst, LAPACK_INTEGER *
              ilst, LAPACK_INTEGER *info);

  int ctgsen_(LAPACK_INTEGER *ijob, LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, 
              LAPACK_LOGICAL *select, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_COMPLEX *alpha, LAPACK_COMPLEX *beta, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq,
              LAPACK_COMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *m, LAPACK_REAL *pl, LAPACK_REAL *pr, LAPACK_REAL *
              dif, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, 
              LAPACK_INTEGER *info);

  int ctgsja_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_COMPLEX *a, LAPACK_INTEGER *
              lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_REAL *tola, LAPACK_REAL *tolb, LAPACK_REAL *alpha, 
              LAPACK_REAL *beta, LAPACK_COMPLEX *u, LAPACK_INTEGER *ldu, LAPACK_COMPLEX *v, LAPACK_INTEGER *ldv, 
              LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_COMPLEX *work, LAPACK_INTEGER *ncycle, LAPACK_INTEGER *
              info);

  int ctgsna_(char *job, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_COMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_COMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_REAL *s, LAPACK_REAL 
              *dif, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER 
              *iwork, LAPACK_INTEGER *info);

  int ctgsy2_(char *trans, LAPACK_INTEGER *ijob, LAPACK_INTEGER *m, LAPACK_INTEGER *
              n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *d__, LAPACK_INTEGER *ldd, LAPACK_COMPLEX *e, LAPACK_INTEGER *lde, 
              LAPACK_COMPLEX *f, LAPACK_INTEGER *ldf, LAPACK_REAL *scale, LAPACK_REAL *rdsum, LAPACK_REAL *rdscal, 
              LAPACK_INTEGER *info);

  int ctgsyl_(char *trans, LAPACK_INTEGER *ijob, LAPACK_INTEGER *m, LAPACK_INTEGER *
              n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *d__, LAPACK_INTEGER *ldd, LAPACK_COMPLEX *e, LAPACK_INTEGER *lde, 
              LAPACK_COMPLEX *f, LAPACK_INTEGER *ldf, LAPACK_REAL *scale, LAPACK_REAL *dif, LAPACK_COMPLEX *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int ctpcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *ap, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int ctprfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_COMPLEX *x, 
              LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int ctptri_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, 
              LAPACK_INTEGER *info);

  int ctptrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int ctrcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_REAL *rcond, LAPACK_COMPLEX *work, LAPACK_REAL *rwork, 
              LAPACK_INTEGER *info);

  int ctrevc_(char *side, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_COMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_COMPLEX *vl, LAPACK_INTEGER *ldvl, 
              LAPACK_COMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_COMPLEX *work, 
              LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int ctrexc_(char *compq, LAPACK_INTEGER *n, LAPACK_COMPLEX *t, LAPACK_INTEGER *
              ldt, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *ifst, LAPACK_INTEGER *ilst, LAPACK_INTEGER *
              info);

  int ctrrfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_COMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_COMPLEX *work, LAPACK_REAL 
              *rwork, LAPACK_INTEGER *info);

  int ctrsen_(char *job, char *compq, LAPACK_LOGICAL *select, LAPACK_INTEGER 
              *n, LAPACK_COMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_COMPLEX *w, 
              LAPACK_INTEGER *m, LAPACK_REAL *s, LAPACK_REAL *sep, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int ctrsna_(char *job, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_COMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_COMPLEX *vl, LAPACK_INTEGER *ldvl, 
              LAPACK_COMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_REAL *s, LAPACK_REAL *sep, LAPACK_INTEGER *mm, LAPACK_INTEGER *
              m, LAPACK_COMPLEX *work, LAPACK_INTEGER *ldwork, LAPACK_REAL *rwork, LAPACK_INTEGER *info);

  int ctrsyl_(char *trana, char *tranb, LAPACK_INTEGER *isgn, LAPACK_INTEGER 
              *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *scale, LAPACK_INTEGER *info);

  int ctrti2_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int ctrtri_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int ctrtrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int ctzrqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_INTEGER *info);

  int ctzrzf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cung2l_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cung2r_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cungbr_(char *vect, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int cunghr_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_COMPLEX *
              a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER 
              *info);

  int cungl2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cunglq_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int cungql_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int cungqr_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int cungr2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cungrq_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int cungtr_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda,
              LAPACK_COMPLEX *tau, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cunm2l_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cunm2r_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cunmbr_(char *vect, char *side, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, 
              LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int cunmhr_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, 
              LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int cunml2_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cunmlq_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cunmql_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cunmqr_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cunmr2_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cunmr3_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, 
              LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cunmrq_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cunmrz_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, 
              LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int cunmtr_(char *side, char *uplo, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_COMPLEX *a, LAPACK_INTEGER *lda, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_COMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int cupgtr_(char *uplo, LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *
              tau, LAPACK_COMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int cupmtr_(char *side, char *uplo, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_COMPLEX *ap, LAPACK_COMPLEX *tau, LAPACK_COMPLEX *c__, LAPACK_INTEGER *ldc, 
              LAPACK_COMPLEX *work, LAPACK_INTEGER *info);

  int dbdsdc_(char *uplo, char *compq, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *vt, 
              LAPACK_INTEGER *ldvt, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *iq, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dbdsqr_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ncvt, LAPACK_INTEGER *
              nru, LAPACK_INTEGER *ncc, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *vt, 
              LAPACK_INTEGER *ldvt, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *
              ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int ddisna_(char *job, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              d__, LAPACK_DOUBLEREAL *sep, LAPACK_INTEGER *info);

  int dgbbrd_(char *vect, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *ncc,
              LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *
              d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *pt, 
              LAPACK_INTEGER *ldpt, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *info);

  int dgbcon_(char *norm, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *anorm, 
              LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dgbequ_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *rowcnd, LAPACK_DOUBLEREAL *colcnd, LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *
              info);

  int dgbrfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *
              ku, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *afb, 
              LAPACK_INTEGER *ldafb, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dgbsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_INTEGER *
             nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, 
             LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dgbsvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl,
              LAPACK_INTEGER *ku, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, 
              LAPACK_DOUBLEREAL *afb, LAPACK_INTEGER *ldafb, LAPACK_INTEGER *ipiv, char *equed, 
              LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dgbtf2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int dgbtrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int dgbtrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *
              ku, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dgebak_(char *job, char *side, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, 
              LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *scale, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *v, LAPACK_INTEGER *
              ldv, LAPACK_INTEGER *info);

  int dgebal_(char *job, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *scale, LAPACK_INTEGER *info);

  int dgebd2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *tauq, LAPACK_DOUBLEREAL *
              taup, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dgebrd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *tauq, LAPACK_DOUBLEREAL *
              taup, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgecon_(char *norm, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dgeequ_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *rowcnd, LAPACK_DOUBLEREAL 
              *colcnd, LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *info);

  int dgees_(char *jobvs, char *sort, LAPACK_L_FP select, LAPACK_INTEGER *n, 
             LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *sdim, LAPACK_DOUBLEREAL *wr, 
             LAPACK_DOUBLEREAL *wi, LAPACK_DOUBLEREAL *vs, LAPACK_INTEGER *ldvs, LAPACK_DOUBLEREAL *work, 
             LAPACK_INTEGER *lwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int dgeesx_(char *jobvs, char *sort, LAPACK_L_FP select, char *
              sense, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *sdim, 
              LAPACK_DOUBLEREAL *wr, LAPACK_DOUBLEREAL *wi, LAPACK_DOUBLEREAL *vs, LAPACK_INTEGER *ldvs, 
              LAPACK_DOUBLEREAL *rconde, LAPACK_DOUBLEREAL *rcondv, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int dgeev_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
             a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *wr, LAPACK_DOUBLEREAL *wi, LAPACK_DOUBLEREAL *vl, 
             LAPACK_INTEGER *ldvl, LAPACK_DOUBLEREAL *vr, LAPACK_INTEGER *ldvr, LAPACK_DOUBLEREAL *work, 
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgeevx_(char *balanc, char *jobvl, char *jobvr, char *
              sense, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *wr, 
              LAPACK_DOUBLEREAL *wi, LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLEREAL *vr, 
              LAPACK_INTEGER *ldvr, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *scale, 
              LAPACK_DOUBLEREAL *abnrm, LAPACK_DOUBLEREAL *rconde, LAPACK_DOUBLEREAL *rcondv, LAPACK_DOUBLEREAL 
              *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dgegs_(char *jobvsl, char *jobvsr, LAPACK_INTEGER *n, 
             LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *
             alphar, LAPACK_DOUBLEREAL *alphai, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *vsl, 
             LAPACK_INTEGER *ldvsl, LAPACK_DOUBLEREAL *vsr, LAPACK_INTEGER *ldvsr, LAPACK_DOUBLEREAL *work, 
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgegv_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
             a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *alphar, 
             LAPACK_DOUBLEREAL *alphai, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *ldvl, 
             LAPACK_DOUBLEREAL *vr, LAPACK_INTEGER *ldvr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
             LAPACK_INTEGER *info);

  int dgehd2_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *info);

  int dgehrd_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgelq2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dgelqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgels_(char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *
             nrhs, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
             LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgelsd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *
              s, LAPACK_DOUBLEREAL *rcond, LAPACK_INTEGER *rank, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dgelss_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *
              s, LAPACK_DOUBLEREAL *rcond, LAPACK_INTEGER *rank, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int dgelsx_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              jpvt, LAPACK_DOUBLEREAL *rcond, LAPACK_INTEGER *rank, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              info);

  int dgelsy_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              jpvt, LAPACK_DOUBLEREAL *rcond, LAPACK_INTEGER *rank, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *info);

  int dgeql2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dgeqlf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgeqp3_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *jpvt, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int dgeqpf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *jpvt, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dgeqr2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dgeqrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgerfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *
              ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int dgerq2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dgerqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgesc2_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLEREAL *rhs, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *jpiv, LAPACK_DOUBLEREAL *scale);

  int dgesdd_(char *jobz, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, 
              LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *ldvt, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dgesv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER 
             *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dgesvd_(char *jobu, char *jobvt, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *
              ldu, LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *ldvt, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dgesvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *af, LAPACK_INTEGER *ldaf, 
              LAPACK_INTEGER *ipiv, char *equed, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *
              rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dgetc2_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER 
              *ipiv, LAPACK_INTEGER *jpiv, LAPACK_INTEGER *info);

  int dgetf2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int dgetrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int dgetri_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER 
              *ipiv, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dgetrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *
              ldb, LAPACK_INTEGER *info);

  int dggbak_(char *job, char *side, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, 
              LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *lscale, LAPACK_DOUBLEREAL *rscale, LAPACK_INTEGER *m, 
              LAPACK_DOUBLEREAL *v, LAPACK_INTEGER *ldv, LAPACK_INTEGER *info);

  int dggbal_(char *job, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, 
              LAPACK_DOUBLEREAL *lscale, LAPACK_DOUBLEREAL *rscale, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              info);

  int dgges_(char *jobvsl, char *jobvsr, char *sort, LAPACK_L_FP 
             delctg, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, 
             LAPACK_INTEGER *ldb, LAPACK_INTEGER *sdim, LAPACK_DOUBLEREAL *alphar, LAPACK_DOUBLEREAL *alphai, 
             LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *vsl, LAPACK_INTEGER *ldvsl, LAPACK_DOUBLEREAL *vsr, 
             LAPACK_INTEGER *ldvsr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_LOGICAL *bwork, 
             LAPACK_INTEGER *info);

  int dggesx_(char *jobvsl, char *jobvsr, char *sort, LAPACK_L_FP 
              delctg, char *sense, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *sdim, LAPACK_DOUBLEREAL *alphar, 
              LAPACK_DOUBLEREAL *alphai, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *vsl, LAPACK_INTEGER *ldvsl,
              LAPACK_DOUBLEREAL *vsr, LAPACK_INTEGER *ldvsr, LAPACK_DOUBLEREAL *rconde, LAPACK_DOUBLEREAL *
              rcondv, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              liwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int dggev_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
             a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *alphar, 
             LAPACK_DOUBLEREAL *alphai, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *ldvl, 
             LAPACK_DOUBLEREAL *vr, LAPACK_INTEGER *ldvr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
             LAPACK_INTEGER *info);

  int dggevx_(char *balanc, char *jobvl, char *jobvr, char *
              sense, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *alphar, LAPACK_DOUBLEREAL *alphai, LAPACK_DOUBLEREAL *
              beta, LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLEREAL *vr, LAPACK_INTEGER *ldvr, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *lscale, LAPACK_DOUBLEREAL *rscale, 
              LAPACK_DOUBLEREAL *abnrm, LAPACK_DOUBLEREAL *bbnrm, LAPACK_DOUBLEREAL *rconde, LAPACK_DOUBLEREAL *
              rcondv, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_LOGICAL *
              bwork, LAPACK_INTEGER *info);

  int dggglm_(LAPACK_INTEGER *n, LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *x, LAPACK_DOUBLEREAL *y, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dgghrd_(char *compq, char *compz, LAPACK_INTEGER *n, LAPACK_INTEGER *
              ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *
              ldz, LAPACK_INTEGER *info);

  int dgglse_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *p, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *x, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dggqrf_(LAPACK_INTEGER *n, LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *taua, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *taub, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dggrqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *taua, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *taub, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dggsvd_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_INTEGER *p, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLEREAL *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *alpha, 
              LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *v, LAPACK_INTEGER 
              *ldv, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int dggsvp_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *tola, LAPACK_DOUBLEREAL *tolb, LAPACK_INTEGER *k, LAPACK_INTEGER 
              *l, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *v, LAPACK_INTEGER *ldv, 
              LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *iwork, LAPACK_DOUBLEREAL *tau, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dgtcon_(char *norm, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *dl, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *du, LAPACK_DOUBLEREAL *du2, LAPACK_INTEGER *ipiv, 
              LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dgtrfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *dl, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *du, LAPACK_DOUBLEREAL *dlf, 
              LAPACK_DOUBLEREAL *df, LAPACK_DOUBLEREAL *duf, LAPACK_DOUBLEREAL *du2, LAPACK_INTEGER *ipiv, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *
              ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              info);

  int dgtsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *dl, 
             LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *du, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER 
             *info);

  int dgtsvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLEREAL *dl, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *du, LAPACK_DOUBLEREAL *
              dlf, LAPACK_DOUBLEREAL *df, LAPACK_DOUBLEREAL *duf, LAPACK_DOUBLEREAL *du2, LAPACK_INTEGER *ipiv, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *
              rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dgttrf_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *dl, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *du, LAPACK_DOUBLEREAL *du2, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int dgttrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *dl, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *du, LAPACK_DOUBLEREAL *du2, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dgtts2_(LAPACK_INTEGER *itrans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *dl, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *du, LAPACK_DOUBLEREAL *du2, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb);

  int dhgeqz_(char *job, char *compq, char *compz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *
              b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *alphar, LAPACK_DOUBLEREAL *alphai, LAPACK_DOUBLEREAL *
              beta, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dhsein_(char *side, char *eigsrc, char *initv, LAPACK_LOGICAL *
              select, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *h__, LAPACK_INTEGER *ldh, LAPACK_DOUBLEREAL *wr, 
              LAPACK_DOUBLEREAL *wi, LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLEREAL *vr, 
              LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              ifaill, LAPACK_INTEGER *ifailr, LAPACK_INTEGER *info);

  int dhseqr_(char *job, char *compz, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo,
              LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *h__, LAPACK_INTEGER *ldh, LAPACK_DOUBLEREAL *wr, 
              LAPACK_DOUBLEREAL *wi, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dlabad_(LAPACK_DOUBLEREAL *small, LAPACK_DOUBLEREAL *large);

  int dlabrd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *tauq, 
              LAPACK_DOUBLEREAL *taup, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *y, LAPACK_INTEGER 
              *ldy);

  int dlacon_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *v, LAPACK_DOUBLEREAL *x, 
              LAPACK_INTEGER *isgn, LAPACK_DOUBLEREAL *est, LAPACK_INTEGER *kase);

  int dlacpy_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb);

  int dladiv_(LAPACK_DOUBLEREAL *a, LAPACK_DOUBLEREAL *b, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *p, LAPACK_DOUBLEREAL *q);

  int dlae2_(LAPACK_DOUBLEREAL *a, LAPACK_DOUBLEREAL *b, LAPACK_DOUBLEREAL *c__, 
             LAPACK_DOUBLEREAL *rt1, LAPACK_DOUBLEREAL *rt2);

  int dlaebz_(LAPACK_INTEGER *ijob, LAPACK_INTEGER *nitmax, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *mmax, LAPACK_INTEGER *minp, LAPACK_INTEGER *nbmin, LAPACK_DOUBLEREAL *abstol, 
              LAPACK_DOUBLEREAL *reltol, LAPACK_DOUBLEREAL *pivmin, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *
              e, LAPACK_DOUBLEREAL *e2, LAPACK_INTEGER *nval, LAPACK_DOUBLEREAL *ab, LAPACK_DOUBLEREAL *c__, 
              LAPACK_INTEGER *mout, LAPACK_INTEGER *nab, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int dlaed0_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *qsiz, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, 
              LAPACK_DOUBLEREAL *qstore, LAPACK_INTEGER *ldqs, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int dlaed1_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *q, 
              LAPACK_INTEGER *ldq, LAPACK_INTEGER *indxq, LAPACK_DOUBLEREAL *rho, LAPACK_INTEGER *cutpnt, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dlaed2_(LAPACK_INTEGER *k, LAPACK_INTEGER *n, LAPACK_INTEGER *n1, LAPACK_DOUBLEREAL *
              d__, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *indxq, LAPACK_DOUBLEREAL *rho, 
              LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *dlamda, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *q2, 
              LAPACK_INTEGER *indx, LAPACK_INTEGER *indxc, LAPACK_INTEGER *indxp, LAPACK_INTEGER *coltyp, 
              LAPACK_INTEGER *info);

  int dlaed3_(LAPACK_INTEGER *k, LAPACK_INTEGER *n, LAPACK_INTEGER *n1, LAPACK_DOUBLEREAL *
              d__, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *rho, LAPACK_DOUBLEREAL *dlamda,
              LAPACK_DOUBLEREAL *q2, LAPACK_INTEGER *indx, LAPACK_INTEGER *ctot, LAPACK_DOUBLEREAL *w, 
              LAPACK_DOUBLEREAL *s, LAPACK_INTEGER *info);

  int dlaed4_(LAPACK_INTEGER *n, LAPACK_INTEGER *i__, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *delta, LAPACK_DOUBLEREAL *rho, LAPACK_DOUBLEREAL *dlam,
              LAPACK_INTEGER *info);

  int dlaed5_(LAPACK_INTEGER *i__, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *z__, 
              LAPACK_DOUBLEREAL *delta, LAPACK_DOUBLEREAL *rho, LAPACK_DOUBLEREAL *dlam);

  int dlaed6_(LAPACK_INTEGER *kniter, LAPACK_LOGICAL *orgati, LAPACK_DOUBLEREAL *
              rho, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *finit, LAPACK_DOUBLEREAL *
              tau, LAPACK_INTEGER *info);

  int dlaed7_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *n, LAPACK_INTEGER *qsiz, 
              LAPACK_INTEGER *tlvls, LAPACK_INTEGER *curlvl, LAPACK_INTEGER *curpbm, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *indxq, LAPACK_DOUBLEREAL *rho, LAPACK_INTEGER 
              *cutpnt, LAPACK_DOUBLEREAL *qstore, LAPACK_INTEGER *qptr, LAPACK_INTEGER *prmptr, LAPACK_INTEGER *
              perm, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_DOUBLEREAL *givnum, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dlaed8_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *k, LAPACK_INTEGER *n, LAPACK_INTEGER 
              *qsiz, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *indxq, 
              LAPACK_DOUBLEREAL *rho, LAPACK_INTEGER *cutpnt, LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *dlamda,
              LAPACK_DOUBLEREAL *q2, LAPACK_INTEGER *ldq2, LAPACK_DOUBLEREAL *w, LAPACK_INTEGER *perm, LAPACK_INTEGER 
              *givptr, LAPACK_INTEGER *givcol, LAPACK_DOUBLEREAL *givnum, LAPACK_INTEGER *indxp, LAPACK_INTEGER 
              *indx, LAPACK_INTEGER *info);

  int dlaed9_(LAPACK_INTEGER *k, LAPACK_INTEGER *kstart, LAPACK_INTEGER *kstop, 
              LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *
              rho, LAPACK_DOUBLEREAL *dlamda, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *s, LAPACK_INTEGER *lds, 
              LAPACK_INTEGER *info);

  int dlaeda_(LAPACK_INTEGER *n, LAPACK_INTEGER *tlvls, LAPACK_INTEGER *curlvl, 
              LAPACK_INTEGER *curpbm, LAPACK_INTEGER *prmptr, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, 
              LAPACK_INTEGER *givcol, LAPACK_DOUBLEREAL *givnum, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *qptr, 
              LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *ztemp, LAPACK_INTEGER *info);

  int dlaein_(LAPACK_LOGICAL *rightv, LAPACK_LOGICAL *noinit, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *h__, LAPACK_INTEGER *ldh, LAPACK_DOUBLEREAL *wr, LAPACK_DOUBLEREAL *wi, 
              LAPACK_DOUBLEREAL *vr, LAPACK_DOUBLEREAL *vi, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *work, LAPACK_DOUBLEREAL *eps3, LAPACK_DOUBLEREAL *smlnum, LAPACK_DOUBLEREAL *
              bignum, LAPACK_INTEGER *info);

  int dlaev2_(LAPACK_DOUBLEREAL *a, LAPACK_DOUBLEREAL *b, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *rt1, LAPACK_DOUBLEREAL *rt2, LAPACK_DOUBLEREAL *cs1, LAPACK_DOUBLEREAL *sn1);

  int dlaexc_(LAPACK_LOGICAL *wantq, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *t, 
              LAPACK_INTEGER *ldt, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *j1, LAPACK_INTEGER *n1, 
              LAPACK_INTEGER *n2, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dlag2_(LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, 
             LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *safmin, LAPACK_DOUBLEREAL *scale1, LAPACK_DOUBLEREAL *
             scale2, LAPACK_DOUBLEREAL *wr1, LAPACK_DOUBLEREAL *wr2, LAPACK_DOUBLEREAL *wi);

  int dlags2_(LAPACK_LOGICAL *upper, LAPACK_DOUBLEREAL *a1, LAPACK_DOUBLEREAL *a2, 
              LAPACK_DOUBLEREAL *a3, LAPACK_DOUBLEREAL *b1, LAPACK_DOUBLEREAL *b2, LAPACK_DOUBLEREAL *b3, 
              LAPACK_DOUBLEREAL *csu, LAPACK_DOUBLEREAL *snu, LAPACK_DOUBLEREAL *csv, LAPACK_DOUBLEREAL *snv, 
              LAPACK_DOUBLEREAL *csq, LAPACK_DOUBLEREAL *snq);

  int dlagtf_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_DOUBLEREAL *lambda, 
              LAPACK_DOUBLEREAL *b, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *tol, LAPACK_DOUBLEREAL *d__, 
              LAPACK_INTEGER *in, LAPACK_INTEGER *info);

  int dlagtm_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLEREAL *dl, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *du, 
              LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER 
              *ldb);

  int dlagts_(LAPACK_INTEGER *job, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, 
              LAPACK_DOUBLEREAL *b, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *d__, LAPACK_INTEGER *in, 
              LAPACK_DOUBLEREAL *y, LAPACK_DOUBLEREAL *tol, LAPACK_INTEGER *info);

  int dlagv2_(LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *alphar, LAPACK_DOUBLEREAL *alphai, LAPACK_DOUBLEREAL *
              beta, LAPACK_DOUBLEREAL *csl, LAPACK_DOUBLEREAL *snl, LAPACK_DOUBLEREAL *csr, LAPACK_DOUBLEREAL *
              snr);

  int dlahqr_(LAPACK_LOGICAL *wantt, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *h__, LAPACK_INTEGER *ldh, LAPACK_DOUBLEREAL 
              *wr, LAPACK_DOUBLEREAL *wi, LAPACK_INTEGER *iloz, LAPACK_INTEGER *ihiz, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *ldz, LAPACK_INTEGER *info);

  int dlahrd_(LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *nb, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *t, LAPACK_INTEGER *ldt, 
              LAPACK_DOUBLEREAL *y, LAPACK_INTEGER *ldy);

  int dlaic1_(LAPACK_INTEGER *job, LAPACK_INTEGER *j, LAPACK_DOUBLEREAL *x, 
              LAPACK_DOUBLEREAL *sest, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *gamma, LAPACK_DOUBLEREAL *
              sestpr, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *c__);

  int dlaln2_(LAPACK_LOGICAL *ltrans, LAPACK_INTEGER *na, LAPACK_INTEGER *nw, 
              LAPACK_DOUBLEREAL *smin, LAPACK_DOUBLEREAL *ca, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLEREAL *d1, LAPACK_DOUBLEREAL *d2, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *wr, LAPACK_DOUBLEREAL *wi, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *xnorm, LAPACK_INTEGER *info);

  int dlals0_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, 
              LAPACK_INTEGER *sqre, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL 
              *bx, LAPACK_INTEGER *ldbx, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, 
              LAPACK_INTEGER *ldgcol, LAPACK_DOUBLEREAL *givnum, LAPACK_INTEGER *ldgnum, LAPACK_DOUBLEREAL *
              poles, LAPACK_DOUBLEREAL *difl, LAPACK_DOUBLEREAL *difr, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *
              k, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dlalsa_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *bx, LAPACK_INTEGER *
              ldbx, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *k, 
              LAPACK_DOUBLEREAL *difl, LAPACK_DOUBLEREAL *difr, LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *
              poles, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_INTEGER *ldgcol, LAPACK_INTEGER *
              perm, LAPACK_DOUBLEREAL *givnum, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dlalsd_(char *uplo, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *n, LAPACK_INTEGER 
              *nrhs, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *rcond, LAPACK_INTEGER *rank, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int dlamc1_(LAPACK_INTEGER *beta, LAPACK_INTEGER *t, LAPACK_LOGICAL *rnd, LAPACK_LOGICAL 
              *ieee1);

  int dlamc2_(LAPACK_INTEGER *beta, LAPACK_INTEGER *t, LAPACK_LOGICAL *rnd, 
              LAPACK_DOUBLEREAL *eps, LAPACK_INTEGER *emin, LAPACK_DOUBLEREAL *rmin, LAPACK_INTEGER *emax, 
              LAPACK_DOUBLEREAL *rmax);

  int dlamc4_(LAPACK_INTEGER *emin, LAPACK_DOUBLEREAL *start, LAPACK_INTEGER *base);

  int dlamc5_(LAPACK_INTEGER *beta, LAPACK_INTEGER *p, LAPACK_INTEGER *emin, 
              LAPACK_LOGICAL *ieee, LAPACK_INTEGER *emax, LAPACK_DOUBLEREAL *rmax);

  int dlamrg_(LAPACK_INTEGER *n1, LAPACK_INTEGER *n2, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER 
              *dtrd1, LAPACK_INTEGER *dtrd2, LAPACK_INTEGER *index);

  int dlanv2_(LAPACK_DOUBLEREAL *a, LAPACK_DOUBLEREAL *b, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *rt1r, LAPACK_DOUBLEREAL *rt1i, LAPACK_DOUBLEREAL *rt2r,
              LAPACK_DOUBLEREAL *rt2i, LAPACK_DOUBLEREAL *cs, LAPACK_DOUBLEREAL *sn);

  int dlapll_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLEREAL *y, LAPACK_INTEGER *incy, LAPACK_DOUBLEREAL *ssmin);

  int dlapmt_(LAPACK_LOGICAL *forwrd, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_INTEGER *k);

  int dlaqgb_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *rowcnd, LAPACK_DOUBLEREAL *colcnd, LAPACK_DOUBLEREAL *amax, char *equed);

  int dlaqge_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *rowcnd, LAPACK_DOUBLEREAL 
              *colcnd, LAPACK_DOUBLEREAL *amax, char *equed);

  int dlaqp2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *offset, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, LAPACK_DOUBLEREAL *tau, 
              LAPACK_DOUBLEREAL *vn1, LAPACK_DOUBLEREAL *vn2, LAPACK_DOUBLEREAL *work);

  int dlaqps_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *offset, LAPACK_INTEGER 
              *nb, LAPACK_INTEGER *kb, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, 
              LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *vn1, LAPACK_DOUBLEREAL *vn2, LAPACK_DOUBLEREAL *auxv, 
              LAPACK_DOUBLEREAL *f, LAPACK_INTEGER *ldf);

  int dlaqsb_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *
              ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax,
              char *equed);

  int dlaqsp_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, char *equed);

  int dlaqsy_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, char *equed);

  int dlaqtr_(LAPACK_LOGICAL *ltran, LAPACK_LOGICAL *lLAPACK_REAL, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLEREAL *b, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL 
              *scale, LAPACK_DOUBLEREAL *x, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dlar1v_(LAPACK_INTEGER *n, LAPACK_INTEGER *b1, LAPACK_INTEGER *bn, LAPACK_DOUBLEREAL 
              *sigma, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *l, LAPACK_DOUBLEREAL *ld, LAPACK_DOUBLEREAL *
              lld, LAPACK_DOUBLEREAL *gersch, LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *ztz, LAPACK_DOUBLEREAL 
              *mingma, LAPACK_INTEGER *r__, LAPACK_INTEGER *isuppz, LAPACK_DOUBLEREAL *work);

  int dlar2v_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *x, LAPACK_DOUBLEREAL *y, 
              LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *incx, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, 
              LAPACK_INTEGER *incc);

  int dlarf_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *v,
             LAPACK_INTEGER *incv, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, 
             LAPACK_DOUBLEREAL *work);

  int dlarfb_(char *side, char *trans, char *direct, char *
              storev, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *v, LAPACK_INTEGER *
              ldv, LAPACK_DOUBLEREAL *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *ldwork);

  int dlarfg_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLEREAL *x, 
              LAPACK_INTEGER *incx, LAPACK_DOUBLEREAL *tau);

  int dlarft_(char *direct, char *storev, LAPACK_INTEGER *n, LAPACK_INTEGER *
              k, LAPACK_DOUBLEREAL *v, LAPACK_INTEGER *ldv, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *t, 
              LAPACK_INTEGER *ldt);

  int dlarfx_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              v, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work);

  int dlargv_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLEREAL *y, LAPACK_INTEGER *incy, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *incc);

  int dlarnv_(LAPACK_INTEGER *idist, LAPACK_INTEGER *iseed, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *x);

  int dlarrb_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *l, 
              LAPACK_DOUBLEREAL *ld, LAPACK_DOUBLEREAL *lld, LAPACK_INTEGER *ifirst, LAPACK_INTEGER *ilast, 
              LAPACK_DOUBLEREAL *sigma, LAPACK_DOUBLEREAL *reltol, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *
              wgap, LAPACK_DOUBLEREAL *werr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              info);

  int dlarre_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_DOUBLEREAL *tol, LAPACK_INTEGER *nsplit, LAPACK_INTEGER *isplit, LAPACK_INTEGER *m, 
              LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *woff, LAPACK_DOUBLEREAL *gersch, LAPACK_DOUBLEREAL *work,
              LAPACK_INTEGER *info);

  int dlarrf_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *l, 
              LAPACK_DOUBLEREAL *ld, LAPACK_DOUBLEREAL *lld, LAPACK_INTEGER *ifirst, LAPACK_INTEGER *ilast, 
              LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *dplus, LAPACK_DOUBLEREAL *lplus, LAPACK_DOUBLEREAL *work,
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dlarrv_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *l, 
              LAPACK_INTEGER *isplit, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_INTEGER *iblock, 
              LAPACK_DOUBLEREAL *gersch, LAPACK_DOUBLEREAL *tol, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, 
              LAPACK_INTEGER *isuppz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dlartg_(LAPACK_DOUBLEREAL *f, LAPACK_DOUBLEREAL *g, LAPACK_DOUBLEREAL *cs, 
              LAPACK_DOUBLEREAL *sn, LAPACK_DOUBLEREAL *r__);

  int dlartv_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLEREAL *y, LAPACK_INTEGER *incy, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, LAPACK_INTEGER 
              *incc);

  int dlaruv_(LAPACK_INTEGER *iseed, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *x);

  int dlarz_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *l, 
             LAPACK_DOUBLEREAL *v, LAPACK_INTEGER *incv, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *c__, 
             LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work);

  int dlarzb_(char *side, char *trans, char *direct, char *
              storev, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLEREAL *v,
              LAPACK_INTEGER *ldv, LAPACK_DOUBLEREAL *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *
              ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *ldwork);

  int dlarzt_(char *direct, char *storev, LAPACK_INTEGER *n, LAPACK_INTEGER *
              k, LAPACK_DOUBLEREAL *v, LAPACK_INTEGER *ldv, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *t, 
              LAPACK_INTEGER *ldt);

  int dlas2_(LAPACK_DOUBLEREAL *f, LAPACK_DOUBLEREAL *g, LAPACK_DOUBLEREAL *h__, 
             LAPACK_DOUBLEREAL *ssmin, LAPACK_DOUBLEREAL *ssmax);

  int dlascl_(char *type__, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, 
              LAPACK_DOUBLEREAL *cfrom, LAPACK_DOUBLEREAL *cto, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int dlasd0_(LAPACK_INTEGER *n, LAPACK_INTEGER *sqre, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *
              ldvt, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *iwork, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              info);

  int dlasd1_(LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, LAPACK_INTEGER *sqre, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *u, 
              LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *ldvt, LAPACK_INTEGER *idxq, LAPACK_INTEGER *
              iwork, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dlasd2_(LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, LAPACK_INTEGER *sqre, LAPACK_INTEGER 
              *k, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLEREAL *
              beta, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *ldvt, 
              LAPACK_DOUBLEREAL *dsigma, LAPACK_DOUBLEREAL *u2, LAPACK_INTEGER *ldu2, LAPACK_DOUBLEREAL *vt2, 
              LAPACK_INTEGER *ldvt2, LAPACK_INTEGER *idxp, LAPACK_INTEGER *idx, LAPACK_INTEGER *idxc, LAPACK_INTEGER *
              idxq, LAPACK_INTEGER *coltyp, LAPACK_INTEGER *info);

  int dlasd3_(LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, LAPACK_INTEGER *sqre, LAPACK_INTEGER 
              *k, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *dsigma, 
              LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *u2, LAPACK_INTEGER *ldu2, 
              LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *ldvt, LAPACK_DOUBLEREAL *vt2, LAPACK_INTEGER *ldvt2, 
              LAPACK_INTEGER *idxc, LAPACK_INTEGER *ctot, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *info);

  int dlasd4_(LAPACK_INTEGER *n, LAPACK_INTEGER *i__, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *delta, LAPACK_DOUBLEREAL *rho, LAPACK_DOUBLEREAL *
              sigma, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dlasd5_(LAPACK_INTEGER *i__, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *z__, 
              LAPACK_DOUBLEREAL *delta, LAPACK_DOUBLEREAL *rho, LAPACK_DOUBLEREAL *dsigma, LAPACK_DOUBLEREAL *
              work);

  int dlasd6_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, 
              LAPACK_INTEGER *sqre, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *vf, LAPACK_DOUBLEREAL *vl, 
              LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLEREAL *beta, LAPACK_INTEGER *idxq, LAPACK_INTEGER *perm, 
              LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_INTEGER *ldgcol, LAPACK_DOUBLEREAL *givnum,
              LAPACK_INTEGER *ldgnum, LAPACK_DOUBLEREAL *poles, LAPACK_DOUBLEREAL *difl, LAPACK_DOUBLEREAL *
              difr, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dlasd7_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, 
              LAPACK_INTEGER *sqre, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *z__, 
              LAPACK_DOUBLEREAL *zw, LAPACK_DOUBLEREAL *vf, LAPACK_DOUBLEREAL *vfw, LAPACK_DOUBLEREAL *vl, 
              LAPACK_DOUBLEREAL *vlw, LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *
              dsigma, LAPACK_INTEGER *idx, LAPACK_INTEGER *idxp, LAPACK_INTEGER *idxq, LAPACK_INTEGER *perm, 
              LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_INTEGER *ldgcol, LAPACK_DOUBLEREAL *givnum,
              LAPACK_INTEGER *ldgnum, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, LAPACK_INTEGER *info);

  int dlasd8_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *vf, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *difl, 
              LAPACK_DOUBLEREAL *difr, LAPACK_INTEGER *lddifr, LAPACK_DOUBLEREAL *dsigma, LAPACK_DOUBLEREAL *
              work, LAPACK_INTEGER *info);

  int dlasd9_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *ldu, LAPACK_INTEGER *k, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *vf, LAPACK_DOUBLEREAL *vl, 
              LAPACK_DOUBLEREAL *difl, LAPACK_DOUBLEREAL *difr, LAPACK_DOUBLEREAL *dsigma, LAPACK_DOUBLEREAL *
              work, LAPACK_INTEGER *info);

  int dlasda_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *sqre, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER 
              *ldu, LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *difl, LAPACK_DOUBLEREAL *difr, 
              LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *poles, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, 
              LAPACK_INTEGER *ldgcol, LAPACK_INTEGER *perm, LAPACK_DOUBLEREAL *givnum, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dlasdq_(char *uplo, LAPACK_INTEGER *sqre, LAPACK_INTEGER *n, LAPACK_INTEGER *
              ncvt, LAPACK_INTEGER *nru, LAPACK_INTEGER *ncc, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *ldvt, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, 
              LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dlasdt_(LAPACK_INTEGER *n, LAPACK_INTEGER *lvl, LAPACK_INTEGER *nd, LAPACK_INTEGER *
              inode, LAPACK_INTEGER *ndiml, LAPACK_INTEGER *ndimr, LAPACK_INTEGER *msub);

  int dlaset_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              alpha, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda);

  int dlasq1_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dlasq2_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *info);

  int dlasq3_(LAPACK_INTEGER *i0, LAPACK_INTEGER *n0, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *pp, LAPACK_DOUBLEREAL *dmin__, LAPACK_DOUBLEREAL *sigma, LAPACK_DOUBLEREAL *desig,
              LAPACK_DOUBLEREAL *qmax, LAPACK_INTEGER *nfail, LAPACK_INTEGER *iter, LAPACK_INTEGER *ndiv, 
              LAPACK_LOGICAL *ieee);

  int dlasq4_(LAPACK_INTEGER *i0, LAPACK_INTEGER *n0, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *pp, LAPACK_INTEGER *n0in, LAPACK_DOUBLEREAL *dmin__, LAPACK_DOUBLEREAL *dmin1, 
              LAPACK_DOUBLEREAL *dmin2, LAPACK_DOUBLEREAL *dn, LAPACK_DOUBLEREAL *dn1, LAPACK_DOUBLEREAL *dn2, 
              LAPACK_DOUBLEREAL *tau, LAPACK_INTEGER *ttype);

  int dlasq5_(LAPACK_INTEGER *i0, LAPACK_INTEGER *n0, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *pp, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *dmin__, LAPACK_DOUBLEREAL *dmin1, 
              LAPACK_DOUBLEREAL *dmin2, LAPACK_DOUBLEREAL *dn, LAPACK_DOUBLEREAL *dnm1, LAPACK_DOUBLEREAL *dnm2,
              LAPACK_LOGICAL *ieee);

  int dlasq6_(LAPACK_INTEGER *i0, LAPACK_INTEGER *n0, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *pp, LAPACK_DOUBLEREAL *dmin__, LAPACK_DOUBLEREAL *dmin1, LAPACK_DOUBLEREAL *dmin2,
              LAPACK_DOUBLEREAL *dn, LAPACK_DOUBLEREAL *dnm1, LAPACK_DOUBLEREAL *dnm2);

  int dlasr_(char *side, char *pivot, char *direct, LAPACK_INTEGER *m,
             LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
             lda);

  int dlasrt_(char *id, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_INTEGER *
              info);

  int dlassq_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *sumsq);

  int dlasv2_(LAPACK_DOUBLEREAL *f, LAPACK_DOUBLEREAL *g, LAPACK_DOUBLEREAL *h__, 
              LAPACK_DOUBLEREAL *ssmin, LAPACK_DOUBLEREAL *ssmax, LAPACK_DOUBLEREAL *snr, LAPACK_DOUBLEREAL *
              csr, LAPACK_DOUBLEREAL *snl, LAPACK_DOUBLEREAL *csl);

  int dlaswp_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER 
              *k1, LAPACK_INTEGER *k2, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *incx);

  int dlasy2_(LAPACK_LOGICAL *ltranl, LAPACK_LOGICAL *ltranr, LAPACK_INTEGER *isgn, 
              LAPACK_INTEGER *n1, LAPACK_INTEGER *n2, LAPACK_DOUBLEREAL *tl, LAPACK_INTEGER *ldtl, LAPACK_DOUBLEREAL *
              tr, LAPACK_INTEGER *ldtr, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *scale, 
              LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *xnorm, LAPACK_INTEGER *info);

  int dlasyf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_INTEGER *kb,
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *w, LAPACK_INTEGER *
              ldw, LAPACK_INTEGER *info);

  int dlatbs_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, 
              LAPACK_DOUBLEREAL *x, LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *cnorm, LAPACK_INTEGER *info);

  int dlatdf_(LAPACK_INTEGER *ijob, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *rhs, LAPACK_DOUBLEREAL *rdsum, LAPACK_DOUBLEREAL *rdscal, 
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *jpiv);

  int dlatps_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *x, LAPACK_DOUBLEREAL *scale, 
              LAPACK_DOUBLEREAL *cnorm, LAPACK_INTEGER *info);

  int dlatrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *w, 
              LAPACK_INTEGER *ldw);

  int dlatrs_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *x, 
              LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *cnorm, LAPACK_INTEGER *info);

  int dlatrz_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *l, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work);

  int dlatzm_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              v, LAPACK_INTEGER *incv, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *c1, LAPACK_DOUBLEREAL *c2, 
              LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work);

  int dlauu2_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *info);

  int dlauum_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *info);

  int dopgtr_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, 
              LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *info);

  int dopmtr_(char *side, char *uplo, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER 
              *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dorg2l_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dorg2r_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dorgbr_(char *vect, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dorghr_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dorgl2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dorglq_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dorgql_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dorgqr_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dorgr2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dorgrq_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dorgtr_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dorm2l_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dorm2r_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dormbr_(char *vect, char *side, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, 
              LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dormhr_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *
              tau, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dorml2_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dormlq_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dormql_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dormqr_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dormr2_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dormr3_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, 
              LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dormrq_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dormrz_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, 
              LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int dormtr_(char *side, char *uplo, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dpbcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *
              ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dpbequ_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *
              ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax,
              LAPACK_INTEGER *info);

  int dpbrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *afb, LAPACK_INTEGER *ldafb, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *
              ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              info);

  int dpbstf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *
              ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int dpbsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
             nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
             LAPACK_INTEGER *info);

  int dpbsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *afb, 
              LAPACK_INTEGER *ldafb, char *equed, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *
              ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr,
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dpbtf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *
              ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int dpbtrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *
              ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int dpbtrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int dpocon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dpoequ_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *info);

  int dporfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *af, LAPACK_INTEGER *ldaf, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *
              ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              info);

  int dposv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL 
             *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dposvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *af, LAPACK_INTEGER *ldaf, 
              char *equed, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *
              x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *
              berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dpotf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *info);

  int dpotrf_(const char *uplo, const LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, const LAPACK_INTEGER *
              lda, LAPACK_INTEGER *info);

  int dpotri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *info);

  int dpotrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int dppcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, 
              LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dppequ_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *info);

  int dpprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *afp, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dppsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL 
             *ap, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dppsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *afp, char *equed, LAPACK_DOUBLEREAL *s, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *
              rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dpptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, LAPACK_INTEGER *
              info);

  int dpptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, LAPACK_INTEGER *
              info);

  int dpptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dptcon_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dpteqr_(char *compz, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *info);

  int dptrfs_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *df, LAPACK_DOUBLEREAL *ef, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER 
              *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr,
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dptsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *d__, 
             LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dptsvx_(char *fact, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *df, LAPACK_DOUBLEREAL *ef, 
              LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *
              rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              info);

  int dpttrf_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_INTEGER *info);

  int dpttrs_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dptts2_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb);

  int drscl_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *sa, LAPACK_DOUBLEREAL *sx, 
             LAPACK_INTEGER *incx);

  int dsbev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
             LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, 
             LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dsbevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dsbevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *
              ldq, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, 
              LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, 
              LAPACK_INTEGER *info);

  int dsbgst_(char *vect, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
              LAPACK_INTEGER *kb, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *bb, LAPACK_INTEGER *
              ldbb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dsbgv_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
             LAPACK_INTEGER *kb, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *bb, LAPACK_INTEGER *
             ldbb, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
             LAPACK_INTEGER *info);

  int dsbgvd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
              LAPACK_INTEGER *kb, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *bb, LAPACK_INTEGER *
              ldbb, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dsbgvx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ka, LAPACK_INTEGER *kb, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *
              bb, LAPACK_INTEGER *ldbb, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *vl, 
              LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER 
              *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int dsbtrd_(char *vect, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dspcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, LAPACK_INTEGER *
              ipiv, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER 
              *iwork, LAPACK_INTEGER *info);

  int dspev_(char *jobz, char *uplo, LAPACK_INTEGER *n, const LAPACK_DOUBLEREAL *
             ap, const LAPACK_DOUBLEREAL *w, const LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
             LAPACK_INTEGER *info);

  int dspevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              ap, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dspevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *
              iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, 
              LAPACK_INTEGER *info);

  int dspgst_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *bp, LAPACK_INTEGER *info);

  int dspgv_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
             n, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *bp, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, 
             LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dspgvd_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
              n, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *bp, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dspgvx_(LAPACK_INTEGER *itype, char *jobz, char *range, char *
              uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *bp, LAPACK_DOUBLEREAL *vl, 
              LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER 
              *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int dsprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *afp, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dspsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL 
             *ap, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dspsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *afp, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, 
              LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int dsptrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *tau, LAPACK_INTEGER *info);

  int dsptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, LAPACK_INTEGER *
              ipiv, LAPACK_INTEGER *info);

  int dsptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *ap, LAPACK_INTEGER *
              ipiv, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dsptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *ap, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int dstebz_(char *range, char *order, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL 
              *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_INTEGER *m, LAPACK_INTEGER *nsplit, 
              LAPACK_DOUBLEREAL *w, LAPACK_INTEGER *iblock, LAPACK_INTEGER *isplit, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dstedc_(char *compz, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dstegr_(char *jobz, char *range, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, 
              LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, 
              LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *isuppz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dstein_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_INTEGER *iblock, LAPACK_INTEGER *isplit, 
              LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int dsteqr_(char *compz, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *info);

  int dsterf_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_INTEGER *info);

  int dstev_(char *jobz, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, 
             LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
             LAPACK_INTEGER *info);

  int dstevd_(char *jobz, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dstevr_(char *jobz, char *range, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, 
              LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, 
              LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *isuppz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dstevx_(char *jobz, char *range, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, 
              LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, 
              LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int dsycon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dsyev_(const char *jobz, const char *uplo, const LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a,
             const LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *work, const LAPACK_INTEGER *lwork, 
             LAPACK_INTEGER *info);

  int dsyevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dsyevr_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *
              il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, 
              LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *isuppz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dsyevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *
              il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, 
              LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int dsygs2_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int dsygst_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int dsygv_(const LAPACK_INTEGER *itype, const char *jobz, const char *uplo, const LAPACK_INTEGER *
             n, LAPACK_DOUBLEREAL *a, const LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, const LAPACK_INTEGER *ldb, 
             LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *work, const LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dsygvd_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
              n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int dsygvx_(LAPACK_INTEGER *itype, char *jobz, char *range, char *
              uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER 
              *ldb, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, 
              LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLEREAL *z__, 
              LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int dsyrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *
              ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int dsysv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL 
             *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
             LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dsysvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *af, LAPACK_INTEGER *ldaf, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *
              ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dsytd2_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *tau, LAPACK_INTEGER *info);

  int dsytf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int dsytrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dsytrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dsytri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dsytrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *
              ldb, LAPACK_INTEGER *info);

  int dtbcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *rcond, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dtbrfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL 
              *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dtbtrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL 
              *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int dtgevc_(char *side, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLEREAL *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER 
              *mm, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dtgex2_(LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *
              q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *j1, LAPACK_INTEGER *
              n1, LAPACK_INTEGER *n2, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dtgexc_(LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *
              q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *ifst, 
              LAPACK_INTEGER *ilst, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int dtgsen_(LAPACK_INTEGER *ijob, LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, 
              LAPACK_LOGICAL *select, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *
              b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *alphar, LAPACK_DOUBLEREAL *alphai, LAPACK_DOUBLEREAL *
              beta, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *z__, LAPACK_INTEGER *ldz, 
              LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *pl, LAPACK_DOUBLEREAL *pr, LAPACK_DOUBLEREAL *dif, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, 
              LAPACK_INTEGER *info);

  int dtgsja_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLEREAL *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *tola, 
              LAPACK_DOUBLEREAL *tolb, LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLEREAL *u, 
              LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *v, LAPACK_INTEGER *ldv, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *
              ldq, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *ncycle, LAPACK_INTEGER *info);

  int dtgsna_(char *job, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLEREAL *vr, LAPACK_INTEGER *ldvr, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *dif, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dtgsy2_(char *trans, LAPACK_INTEGER *ijob, LAPACK_INTEGER *m, LAPACK_INTEGER *
              n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *d__, LAPACK_INTEGER *ldd, 
              LAPACK_DOUBLEREAL *e, LAPACK_INTEGER *lde, LAPACK_DOUBLEREAL *f, LAPACK_INTEGER *ldf, LAPACK_DOUBLEREAL *
              scale, LAPACK_DOUBLEREAL *rdsum, LAPACK_DOUBLEREAL *rdscal, LAPACK_INTEGER *iwork, LAPACK_INTEGER 
              *pq, LAPACK_INTEGER *info);

  int dtgsyl_(char *trans, LAPACK_INTEGER *ijob, LAPACK_INTEGER *m, LAPACK_INTEGER *
              n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *d__, LAPACK_INTEGER *ldd, 
              LAPACK_DOUBLEREAL *e, LAPACK_INTEGER *lde, LAPACK_DOUBLEREAL *f, LAPACK_INTEGER *ldf, LAPACK_DOUBLEREAL *
              scale, LAPACK_DOUBLEREAL *dif, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dtpcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int dtprfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dtptri_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              ap, LAPACK_INTEGER *info);

  int dtptrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *ap, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int dtrcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dtrevc_(char *side, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *
              ldvl, LAPACK_DOUBLEREAL *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dtrexc_(char *compq, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *t, LAPACK_INTEGER *
              ldt, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *ifst, LAPACK_INTEGER *ilst, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *info);

  int dtrrfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *
              ldb, LAPACK_DOUBLEREAL *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int dtrsen_(char *job, char *compq, LAPACK_LOGICAL *select, LAPACK_INTEGER 
              *n, LAPACK_DOUBLEREAL *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLEREAL *q, LAPACK_INTEGER *ldq, 
              LAPACK_DOUBLEREAL *wr, LAPACK_DOUBLEREAL *wi, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL 
              *sep, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              liwork, LAPACK_INTEGER *info);

  int dtrsna_(char *job, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLEREAL *vl, LAPACK_INTEGER *
              ldvl, LAPACK_DOUBLEREAL *vr, LAPACK_INTEGER *ldvr, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *sep, 
              LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *ldwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int dtrsyl_(char *trana, char *tranb, LAPACK_INTEGER *isgn, LAPACK_INTEGER 
              *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *
              ldb, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *scale, LAPACK_INTEGER *info);

  int dtrti2_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int dtrtri_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int dtrtrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *
              ldb, LAPACK_INTEGER *info);

  int dtzrqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_INTEGER *info);

  int dtzrzf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLEREAL *tau, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  LAPACK_INTEGER icmax1_(LAPACK_INTEGER *n, LAPACK_COMPLEX *cx, LAPACK_INTEGER *incx);

  LAPACK_INTEGER ieeeck_(LAPACK_INTEGER *ispec, LAPACK_REAL *zero, LAPACK_REAL *one);

  LAPACK_INTEGER ilaenv_(const LAPACK_INTEGER *ispec, char *name__, const char *opts, const LAPACK_INTEGER *n1, 
                         const LAPACK_INTEGER *n2, const LAPACK_INTEGER *n3, const LAPACK_INTEGER *n4, LAPACK_FTNLEN name_len, LAPACK_FTNLEN 
                         opts_len);

  LAPACK_INTEGER izmax1_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *cx, LAPACK_INTEGER *incx);

  int sbdsdc_(char *uplo, char *compq, LAPACK_INTEGER *n, LAPACK_REAL *d__, 
              LAPACK_REAL *e, LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *vt, LAPACK_INTEGER *ldvt, LAPACK_REAL *q, 
              LAPACK_INTEGER *iq, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sbdsqr_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ncvt, LAPACK_INTEGER *
              nru, LAPACK_INTEGER *ncc, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *vt, LAPACK_INTEGER *ldvt, LAPACK_REAL *
              u, LAPACK_INTEGER *ldu, LAPACK_REAL *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sdisna_(char *job, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *d__, 
              LAPACK_REAL *sep, LAPACK_INTEGER *info);

  int sgbbrd_(char *vect, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *ncc,
              LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *d__, LAPACK_REAL *
              e, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *pt, LAPACK_INTEGER *ldpt, LAPACK_REAL *c__, LAPACK_INTEGER 
              *ldc, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgbcon_(char *norm, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_REAL *anorm, LAPACK_REAL *rcond, 
              LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgbequ_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *rowcnd, LAPACK_REAL *
              colcnd, LAPACK_REAL *amax, LAPACK_INTEGER *info);

  int sgbrfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *
              ku, LAPACK_INTEGER *nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *afb, LAPACK_INTEGER *ldafb,
              LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *
              ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgbsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_INTEGER *
             nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, 
             LAPACK_INTEGER *info);

  int sgbsvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl,
              LAPACK_INTEGER *ku, LAPACK_INTEGER *nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *afb, 
              LAPACK_INTEGER *ldafb, LAPACK_INTEGER *ipiv, char *equed, LAPACK_REAL *r__, LAPACK_REAL *c__, 
              LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr,
              LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgbtf2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int sgbtrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int sgbtrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *
              ku, LAPACK_INTEGER *nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sgebak_(char *job, char *side, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, 
              LAPACK_INTEGER *ihi, LAPACK_REAL *scale, LAPACK_INTEGER *m, LAPACK_REAL *v, LAPACK_INTEGER *ldv, LAPACK_INTEGER 
              *info);

  int sgebal_(char *job, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *scale, LAPACK_INTEGER *info);

  int sgebd2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *tauq, LAPACK_REAL *taup, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgebrd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *tauq, LAPACK_REAL *taup, LAPACK_REAL *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *info);

  int sgecon_(char *norm, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgeequ_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *rowcnd, LAPACK_REAL *colcnd, LAPACK_REAL *amax, LAPACK_INTEGER 
              *info);

  int sgees_(char *jobvs, char *sort, LAPACK_L_FP select, LAPACK_INTEGER *n, 
             LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *sdim, LAPACK_REAL *wr, LAPACK_REAL *wi, LAPACK_REAL *vs, 
             LAPACK_INTEGER *ldvs, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *
             info);

  int sgeesx_(char *jobvs, char *sort, LAPACK_L_FP select, char *
              sense, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *sdim, LAPACK_REAL *wr, 
              LAPACK_REAL *wi, LAPACK_REAL *vs, LAPACK_INTEGER *ldvs, LAPACK_REAL *rconde, LAPACK_REAL *rcondv, LAPACK_REAL *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_LOGICAL *bwork,
              LAPACK_INTEGER *info);

  int sgeev_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_REAL *a, 
             LAPACK_INTEGER *lda, LAPACK_REAL *wr, LAPACK_REAL *wi, LAPACK_REAL *vl, LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, 
             LAPACK_INTEGER *ldvr, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgeevx_(char *balanc, char *jobvl, char *jobvr, char *
              sense, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *wr, LAPACK_REAL *wi, LAPACK_REAL *
              vl, LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *ilo, LAPACK_INTEGER *
              ihi, LAPACK_REAL *scale, LAPACK_REAL *abnrm, LAPACK_REAL *rconde, LAPACK_REAL *rcondv, LAPACK_REAL *work,
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgegs_(char *jobvsl, char *jobvsr, LAPACK_INTEGER *n, LAPACK_REAL *a, 
             LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *alphar, LAPACK_REAL *alphai, LAPACK_REAL 
             *beta, LAPACK_REAL *vsl, LAPACK_INTEGER *ldvsl, LAPACK_REAL *vsr, LAPACK_INTEGER *ldvsr, LAPACK_REAL *
             work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgegv_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_REAL *a, 
             LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *alphar, LAPACK_REAL *alphai, LAPACK_REAL 
             *beta, LAPACK_REAL *vl, LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, LAPACK_INTEGER *ldvr, LAPACK_REAL *work, 
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgehd2_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgehrd_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgelq2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgelqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgels_(char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *
             nrhs, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *work, 
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgelsd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *s, LAPACK_REAL *rcond, LAPACK_INTEGER *
              rank, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgelss_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *s, LAPACK_REAL *rcond, LAPACK_INTEGER *
              rank, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgelsx_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *jpvt, LAPACK_REAL *rcond, 
              LAPACK_INTEGER *rank, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgelsy_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *jpvt, LAPACK_REAL *rcond, 
              LAPACK_INTEGER *rank, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgeql2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgeqlf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgeqp3_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *jpvt, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgeqpf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *jpvt, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgeqr2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgeqrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgerfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgerq2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgerqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgesc2_(LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *rhs, 
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *jpiv, LAPACK_REAL *scale);

  int sgesdd_(char *jobz, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *s, LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *vt, LAPACK_INTEGER *ldvt,
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgesv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
             LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sgesvd_(char *jobu, char *jobvt, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *s, LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *vt, 
              LAPACK_INTEGER *ldvt, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgesvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *ipiv, 
              char *equed, LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, 
              LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgetc2_(LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv,
              LAPACK_INTEGER *jpiv, LAPACK_INTEGER *info);

  int sgetf2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int sgetrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int sgetri_(LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv,
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgetrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sggbak_(char *job, char *side, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, 
              LAPACK_INTEGER *ihi, LAPACK_REAL *lscale, LAPACK_REAL *rscale, LAPACK_INTEGER *m, LAPACK_REAL *v, 
              LAPACK_INTEGER *ldv, LAPACK_INTEGER *info);

  int sggbal_(char *job, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *lscale, LAPACK_REAL 
              *rscale, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgges_(char *jobvsl, char *jobvsr, char *sort, LAPACK_L_FP 
             selctg, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, 
             LAPACK_INTEGER *sdim, LAPACK_REAL *alphar, LAPACK_REAL *alphai, LAPACK_REAL *beta, LAPACK_REAL *vsl, 
             LAPACK_INTEGER *ldvsl, LAPACK_REAL *vsr, LAPACK_INTEGER *ldvsr, LAPACK_REAL *work, LAPACK_INTEGER *lwork,
             LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int sggesx_(char *jobvsl, char *jobvsr, char *sort, LAPACK_L_FP 
              selctg, char *sense, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_INTEGER *sdim, LAPACK_REAL *alphar, LAPACK_REAL *alphai, LAPACK_REAL *beta, 
              LAPACK_REAL *vsl, LAPACK_INTEGER *ldvsl, LAPACK_REAL *vsr, LAPACK_INTEGER *ldvsr, LAPACK_REAL *rconde, 
              LAPACK_REAL *rcondv, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              liwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int sggev_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, LAPACK_REAL *a, 
             LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *alphar, LAPACK_REAL *alphai, LAPACK_REAL 
             *beta, LAPACK_REAL *vl, LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, LAPACK_INTEGER *ldvr, LAPACK_REAL *work, 
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sggevx_(char *balanc, char *jobvl, char *jobvr, char *
              sense, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL 
              *alphar, LAPACK_REAL *alphai, LAPACK_REAL *beta, LAPACK_REAL *vl, LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, 
              LAPACK_INTEGER *ldvr, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *lscale, LAPACK_REAL *rscale,
              LAPACK_REAL *abnrm, LAPACK_REAL *bbnrm, LAPACK_REAL *rconde, LAPACK_REAL *rcondv, LAPACK_REAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int sggglm_(LAPACK_INTEGER *n, LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *d__, LAPACK_REAL *x, LAPACK_REAL *y, 
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sgghrd_(char *compq, char *compz, LAPACK_INTEGER *n, LAPACK_INTEGER *
              ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL 
              *q, LAPACK_INTEGER *ldq, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *info);

  int sgglse_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *p, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *c__, LAPACK_REAL *d__, LAPACK_REAL *x, 
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sggqrf_(LAPACK_INTEGER *n, LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *taua, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *taub, LAPACK_REAL *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sggrqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *taua, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *taub, LAPACK_REAL *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sggsvd_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_INTEGER *p, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_REAL *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *alpha, LAPACK_REAL *beta, LAPACK_REAL *u, LAPACK_INTEGER *
              ldu, LAPACK_REAL *v, LAPACK_INTEGER *ldv, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sggsvp_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_REAL *tola, LAPACK_REAL *tolb, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_REAL *u, LAPACK_INTEGER *ldu,
              LAPACK_REAL *v, LAPACK_INTEGER *ldv, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *iwork, LAPACK_REAL *
              tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sgtcon_(char *norm, LAPACK_INTEGER *n, LAPACK_REAL *dl, LAPACK_REAL *d__, 
              LAPACK_REAL *du, LAPACK_REAL *du2, LAPACK_INTEGER *ipiv, LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_REAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgtrfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *dl,
              LAPACK_REAL *d__, LAPACK_REAL *du, LAPACK_REAL *dlf, LAPACK_REAL *df, LAPACK_REAL *duf, LAPACK_REAL *du2, 
              LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *
              ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sgtsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *dl, LAPACK_REAL *d__, 
             LAPACK_REAL *du, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sgtsvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_REAL *dl, LAPACK_REAL *d__, LAPACK_REAL *du, LAPACK_REAL *dlf, LAPACK_REAL *df, LAPACK_REAL *duf, 
              LAPACK_REAL *du2, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *
              ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int sgttrf_(LAPACK_INTEGER *n, LAPACK_REAL *dl, LAPACK_REAL *d__, LAPACK_REAL *du, LAPACK_REAL *
              du2, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int sgttrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *dl,
              LAPACK_REAL *d__, LAPACK_REAL *du, LAPACK_REAL *du2, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb,
              LAPACK_INTEGER *info);

  int sgtts2_(LAPACK_INTEGER *itrans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL 
              *dl, LAPACK_REAL *d__, LAPACK_REAL *du, LAPACK_REAL *du2, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *
              ldb);

  int shgeqz_(char *job, char *compq, char *compz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *
              ldb, LAPACK_REAL *alphar, LAPACK_REAL *alphai, LAPACK_REAL *beta, LAPACK_REAL *q, LAPACK_INTEGER *ldq, 
              LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int shsein_(char *side, char *eigsrc, char *initv, LAPACK_LOGICAL *
              select, LAPACK_INTEGER *n, LAPACK_REAL *h__, LAPACK_INTEGER *ldh, LAPACK_REAL *wr, LAPACK_REAL *wi, LAPACK_REAL 
              *vl, LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, 
              LAPACK_REAL *work, LAPACK_INTEGER *ifaill, LAPACK_INTEGER *ifailr, LAPACK_INTEGER *info);

  int shseqr_(char *job, char *compz, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo,
              LAPACK_INTEGER *ihi, LAPACK_REAL *h__, LAPACK_INTEGER *ldh, LAPACK_REAL *wr, LAPACK_REAL *wi, LAPACK_REAL *z__,
              LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int slabad_(LAPACK_REAL *small, LAPACK_REAL *large);

  int slabrd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *tauq, LAPACK_REAL *taup, LAPACK_REAL *x, 
              LAPACK_INTEGER *ldx, LAPACK_REAL *y, LAPACK_INTEGER *ldy);

  int slacon_(LAPACK_INTEGER *n, LAPACK_REAL *v, LAPACK_REAL *x, LAPACK_INTEGER *isgn, 
              LAPACK_REAL *est, LAPACK_INTEGER *kase);

  int slacpy_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb);

  int sladiv_(LAPACK_REAL *a, LAPACK_REAL *b, LAPACK_REAL *c__, LAPACK_REAL *d__, LAPACK_REAL *p, 
              LAPACK_REAL *q);

  int slae2_(LAPACK_REAL *a, LAPACK_REAL *b, LAPACK_REAL *c__, LAPACK_REAL *rt1, LAPACK_REAL *rt2);

  int slaebz_(LAPACK_INTEGER *ijob, LAPACK_INTEGER *nitmax, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *mmax, LAPACK_INTEGER *minp, LAPACK_INTEGER *nbmin, LAPACK_REAL *abstol, LAPACK_REAL *
              reltol, LAPACK_REAL *pivmin, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *e2, LAPACK_INTEGER *nval, 
              LAPACK_REAL *ab, LAPACK_REAL *c__, LAPACK_INTEGER *mout, LAPACK_INTEGER *nab, LAPACK_REAL *work, LAPACK_INTEGER 
              *iwork, LAPACK_INTEGER *info);

  int slaed0_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *qsiz, LAPACK_INTEGER *n, LAPACK_REAL 
              *d__, LAPACK_REAL *e, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *qstore, LAPACK_INTEGER *ldqs, 
              LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int slaed1_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *q, LAPACK_INTEGER *ldq, 
              LAPACK_INTEGER *indxq, LAPACK_REAL *rho, LAPACK_INTEGER *cutpnt, LAPACK_REAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int slaed2_(LAPACK_INTEGER *k, LAPACK_INTEGER *n, LAPACK_INTEGER *n1, LAPACK_REAL *d__, 
              LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *indxq, LAPACK_REAL *rho, LAPACK_REAL *z__, LAPACK_REAL *
              dlamda, LAPACK_REAL *w, LAPACK_REAL *q2, LAPACK_INTEGER *indx, LAPACK_INTEGER *indxc, LAPACK_INTEGER *
              indxp, LAPACK_INTEGER *coltyp, LAPACK_INTEGER *info);

  int slaed3_(LAPACK_INTEGER *k, LAPACK_INTEGER *n, LAPACK_INTEGER *n1, LAPACK_REAL *d__, 
              LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *rho, LAPACK_REAL *dlamda, LAPACK_REAL *q2, LAPACK_INTEGER *
              indx, LAPACK_INTEGER *ctot, LAPACK_REAL *w, LAPACK_REAL *s, LAPACK_INTEGER *info);

  int slaed4_(LAPACK_INTEGER *n, LAPACK_INTEGER *i__, LAPACK_REAL *d__, LAPACK_REAL *z__, 
              LAPACK_REAL *delta, LAPACK_REAL *rho, LAPACK_REAL *dlam, LAPACK_INTEGER *info);

  int slaed5_(LAPACK_INTEGER *i__, LAPACK_REAL *d__, LAPACK_REAL *z__, LAPACK_REAL *delta, 
              LAPACK_REAL *rho, LAPACK_REAL *dlam);

  int slaed6_(LAPACK_INTEGER *kniter, LAPACK_LOGICAL *orgati, LAPACK_REAL *rho, 
              LAPACK_REAL *d__, LAPACK_REAL *z__, LAPACK_REAL *finit, LAPACK_REAL *tau, LAPACK_INTEGER *info);

  int slaed7_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *n, LAPACK_INTEGER *qsiz, 
              LAPACK_INTEGER *tlvls, LAPACK_INTEGER *curlvl, LAPACK_INTEGER *curpbm, LAPACK_REAL *d__, LAPACK_REAL *q, 
              LAPACK_INTEGER *ldq, LAPACK_INTEGER *indxq, LAPACK_REAL *rho, LAPACK_INTEGER *cutpnt, LAPACK_REAL *
              qstore, LAPACK_INTEGER *qptr, LAPACK_INTEGER *prmptr, LAPACK_INTEGER *perm, LAPACK_INTEGER *
              givptr, LAPACK_INTEGER *givcol, LAPACK_REAL *givnum, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int slaed8_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *k, LAPACK_INTEGER *n, LAPACK_INTEGER 
              *qsiz, LAPACK_REAL *d__, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *indxq, LAPACK_REAL *rho, 
              LAPACK_INTEGER *cutpnt, LAPACK_REAL *z__, LAPACK_REAL *dlamda, LAPACK_REAL *q2, LAPACK_INTEGER *ldq2, 
              LAPACK_REAL *w, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_REAL *
              givnum, LAPACK_INTEGER *indxp, LAPACK_INTEGER *indx, LAPACK_INTEGER *info);

  int slaed9_(LAPACK_INTEGER *k, LAPACK_INTEGER *kstart, LAPACK_INTEGER *kstop, 
              LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *rho, LAPACK_REAL *dlamda,
              LAPACK_REAL *w, LAPACK_REAL *s, LAPACK_INTEGER *lds, LAPACK_INTEGER *info);

  int slaeda_(LAPACK_INTEGER *n, LAPACK_INTEGER *tlvls, LAPACK_INTEGER *curlvl, 
              LAPACK_INTEGER *curpbm, LAPACK_INTEGER *prmptr, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, 
              LAPACK_INTEGER *givcol, LAPACK_REAL *givnum, LAPACK_REAL *q, LAPACK_INTEGER *qptr, LAPACK_REAL *z__, 
              LAPACK_REAL *ztemp, LAPACK_INTEGER *info);

  int slaein_(LAPACK_LOGICAL *rightv, LAPACK_LOGICAL *noinit, LAPACK_INTEGER *n, 
              LAPACK_REAL *h__, LAPACK_INTEGER *ldh, LAPACK_REAL *wr, LAPACK_REAL *wi, LAPACK_REAL *vr, LAPACK_REAL *vi, LAPACK_REAL 
              *b, LAPACK_INTEGER *ldb, LAPACK_REAL *work, LAPACK_REAL *eps3, LAPACK_REAL *smlnum, LAPACK_REAL *bignum, 
              LAPACK_INTEGER *info);

  int slaev2_(LAPACK_REAL *a, LAPACK_REAL *b, LAPACK_REAL *c__, LAPACK_REAL *rt1, LAPACK_REAL *
              rt2, LAPACK_REAL *cs1, LAPACK_REAL *sn1);

  int slaexc_(LAPACK_LOGICAL *wantq, LAPACK_INTEGER *n, LAPACK_REAL *t, LAPACK_INTEGER *
              ldt, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *j1, LAPACK_INTEGER *n1, LAPACK_INTEGER *n2, 
              LAPACK_REAL *work, LAPACK_INTEGER *info);

  int slag2_(LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, 
             LAPACK_REAL *safmin, LAPACK_REAL *scale1, LAPACK_REAL *scale2, LAPACK_REAL *wr1, LAPACK_REAL *wr2, LAPACK_REAL *
             wi);

  int slags2_(LAPACK_LOGICAL *upper, LAPACK_REAL *a1, LAPACK_REAL *a2, LAPACK_REAL *a3, 
              LAPACK_REAL *b1, LAPACK_REAL *b2, LAPACK_REAL *b3, LAPACK_REAL *csu, LAPACK_REAL *snu, LAPACK_REAL *csv, LAPACK_REAL *
              snv, LAPACK_REAL *csq, LAPACK_REAL *snq);

  int slagtf_(LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_REAL *lambda, LAPACK_REAL *b, LAPACK_REAL 
              *c__, LAPACK_REAL *tol, LAPACK_REAL *d__, LAPACK_INTEGER *in, LAPACK_INTEGER *info);

  int slagtm_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *
              alpha, LAPACK_REAL *dl, LAPACK_REAL *d__, LAPACK_REAL *du, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *
              beta, LAPACK_REAL *b, LAPACK_INTEGER *ldb);

  int slagts_(LAPACK_INTEGER *job, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_REAL *b, LAPACK_REAL 
              *c__, LAPACK_REAL *d__, LAPACK_INTEGER *in, LAPACK_REAL *y, LAPACK_REAL *tol, LAPACK_INTEGER *info);

  int slagv2_(LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, 
              LAPACK_REAL *alphar, LAPACK_REAL *alphai, LAPACK_REAL *beta, LAPACK_REAL *csl, LAPACK_REAL *snl, LAPACK_REAL *
              csr, LAPACK_REAL *snr);

  int slahqr_(LAPACK_LOGICAL *wantt, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *h__, LAPACK_INTEGER *ldh, LAPACK_REAL *wr, LAPACK_REAL *
              wi, LAPACK_INTEGER *iloz, LAPACK_INTEGER *ihiz, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *
              info);

  int slahrd_(LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *nb, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *t, LAPACK_INTEGER *ldt, LAPACK_REAL *y, LAPACK_INTEGER *ldy);

  int slaic1_(LAPACK_INTEGER *job, LAPACK_INTEGER *j, LAPACK_REAL *x, LAPACK_REAL *sest, 
              LAPACK_REAL *w, LAPACK_REAL *gamma, LAPACK_REAL *sestpr, LAPACK_REAL *s, LAPACK_REAL *c__);

  int slaln2_(LAPACK_LOGICAL *ltrans, LAPACK_INTEGER *na, LAPACK_INTEGER *nw, LAPACK_REAL *
              smin, LAPACK_REAL *ca, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *d1, LAPACK_REAL *d2, LAPACK_REAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_REAL *wr, LAPACK_REAL *wi, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *scale, 
              LAPACK_REAL *xnorm, LAPACK_INTEGER *info);

  int slals0_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, 
              LAPACK_INTEGER *sqre, LAPACK_INTEGER *nrhs, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *bx, 
              LAPACK_INTEGER *ldbx, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, 
              LAPACK_INTEGER *ldgcol, LAPACK_REAL *givnum, LAPACK_INTEGER *ldgnum, LAPACK_REAL *poles, LAPACK_REAL *
              difl, LAPACK_REAL *difr, LAPACK_REAL *z__, LAPACK_INTEGER *k, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_REAL *
              work, LAPACK_INTEGER *info);

  int slalsa_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *bx, LAPACK_INTEGER *ldbx, LAPACK_REAL *
              u, LAPACK_INTEGER *ldu, LAPACK_REAL *vt, LAPACK_INTEGER *k, LAPACK_REAL *difl, LAPACK_REAL *difr, LAPACK_REAL *
              z__, LAPACK_REAL *poles, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_INTEGER *ldgcol, 
              LAPACK_INTEGER *perm, LAPACK_REAL *givnum, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_REAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int slalsd_(char *uplo, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *n, LAPACK_INTEGER 
              *nrhs, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *rcond, 
              LAPACK_INTEGER *rank, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int slamc1_(LAPACK_INTEGER *beta, LAPACK_INTEGER *t, LAPACK_LOGICAL *rnd, LAPACK_LOGICAL 
              *ieee1);

  int slamc2_(LAPACK_INTEGER *beta, LAPACK_INTEGER *t, LAPACK_LOGICAL *rnd, LAPACK_REAL *
              eps, LAPACK_INTEGER *emin, LAPACK_REAL *rmin, LAPACK_INTEGER *emax, LAPACK_REAL *rmax);

  int slamc4_(LAPACK_INTEGER *emin, LAPACK_REAL *start, LAPACK_INTEGER *base);

  int slamc5_(LAPACK_INTEGER *beta, LAPACK_INTEGER *p, LAPACK_INTEGER *emin, 
              LAPACK_LOGICAL *ieee, LAPACK_INTEGER *emax, LAPACK_REAL *rmax);

  int slamrg_(LAPACK_INTEGER *n1, LAPACK_INTEGER *n2, LAPACK_REAL *a, LAPACK_INTEGER *
              strd1, LAPACK_INTEGER *strd2, LAPACK_INTEGER *index);

  int slanv2_(LAPACK_REAL *a, LAPACK_REAL *b, LAPACK_REAL *c__, LAPACK_REAL *d__, LAPACK_REAL *
              rt1r, LAPACK_REAL *rt1i, LAPACK_REAL *rt2r, LAPACK_REAL *rt2i, LAPACK_REAL *cs, LAPACK_REAL *sn);

  int slapll_(LAPACK_INTEGER *n, LAPACK_REAL *x, LAPACK_INTEGER *incx, LAPACK_REAL *y, 
              LAPACK_INTEGER *incy, LAPACK_REAL *ssmin);

  int slapmt_(LAPACK_LOGICAL *forwrd, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *x,
              LAPACK_INTEGER *ldx, LAPACK_INTEGER *k);

  int slaqgb_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *rowcnd, LAPACK_REAL *
              colcnd, LAPACK_REAL *amax, char *equed);

  int slaqge_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *r__, LAPACK_REAL *c__, LAPACK_REAL *rowcnd, LAPACK_REAL *colcnd, LAPACK_REAL *amax, char *
              equed);

  int slaqp2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *offset, LAPACK_REAL *a,
              LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, LAPACK_REAL *tau, LAPACK_REAL *vn1, LAPACK_REAL *vn2, LAPACK_REAL *
              work);

  int slaqps_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *offset, LAPACK_INTEGER 
              *nb, LAPACK_INTEGER *kb, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, LAPACK_REAL *tau, 
              LAPACK_REAL *vn1, LAPACK_REAL *vn2, LAPACK_REAL *auxv, LAPACK_REAL *f, LAPACK_INTEGER *ldf);

  int slaqsb_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_REAL *ab, 
              LAPACK_INTEGER *ldab, LAPACK_REAL *s, LAPACK_REAL *scond, LAPACK_REAL *amax, char *equed);

  int slaqsp_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_REAL *s, LAPACK_REAL *
              scond, LAPACK_REAL *amax, char *equed);

  int slaqsy_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *s, LAPACK_REAL *scond, LAPACK_REAL *amax, char *equed);

  int slaqtr_(LAPACK_LOGICAL *ltran, LAPACK_LOGICAL *lLAPACK_REAL, LAPACK_INTEGER *n, LAPACK_REAL 
              *t, LAPACK_INTEGER *ldt, LAPACK_REAL *b, LAPACK_REAL *w, LAPACK_REAL *scale, LAPACK_REAL *x, LAPACK_REAL *work, 
              LAPACK_INTEGER *info);

  int slar1v_(LAPACK_INTEGER *n, LAPACK_INTEGER *b1, LAPACK_INTEGER *bn, LAPACK_REAL *
              sigma, LAPACK_REAL *d__, LAPACK_REAL *l, LAPACK_REAL *ld, LAPACK_REAL *lld, LAPACK_REAL *gersch, LAPACK_REAL *
              z__, LAPACK_REAL *ztz, LAPACK_REAL *mingma, LAPACK_INTEGER *r__, LAPACK_INTEGER *isuppz, LAPACK_REAL *
              work);

  int slar2v_(LAPACK_INTEGER *n, LAPACK_REAL *x, LAPACK_REAL *y, LAPACK_REAL *z__, LAPACK_INTEGER 
              *incx, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_INTEGER *incc);

  int slarf_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *v, 
             LAPACK_INTEGER *incv, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *work);

  int slarfb_(char *side, char *trans, char *direct, char *
              storev, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *v, LAPACK_INTEGER *ldv, 
              LAPACK_REAL *t, LAPACK_INTEGER *ldt, LAPACK_REAL *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *work, LAPACK_INTEGER *
              ldwork);

  int slarfg_(LAPACK_INTEGER *n, LAPACK_REAL *alpha, LAPACK_REAL *x, LAPACK_INTEGER *incx, 
              LAPACK_REAL *tau);

  int slarft_(char *direct, char *storev, LAPACK_INTEGER *n, LAPACK_INTEGER *
              k, LAPACK_REAL *v, LAPACK_INTEGER *ldv, LAPACK_REAL *tau, LAPACK_REAL *t, LAPACK_INTEGER *ldt);

  int slarfx_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *v, 
              LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *work);

  int slargv_(LAPACK_INTEGER *n, LAPACK_REAL *x, LAPACK_INTEGER *incx, LAPACK_REAL *y, 
              LAPACK_INTEGER *incy, LAPACK_REAL *c__, LAPACK_INTEGER *incc);

  int slarnv_(LAPACK_INTEGER *idist, LAPACK_INTEGER *iseed, LAPACK_INTEGER *n, LAPACK_REAL 
              *x);

  int slarrb_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *l, LAPACK_REAL *ld, LAPACK_REAL *
              lld, LAPACK_INTEGER *ifirst, LAPACK_INTEGER *ilast, LAPACK_REAL *sigma, LAPACK_REAL *reltol, LAPACK_REAL 
              *w, LAPACK_REAL *wgap, LAPACK_REAL *werr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int slarre_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *tol, 
              LAPACK_INTEGER *nsplit, LAPACK_INTEGER *isplit, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *woff, 
              LAPACK_REAL *gersch, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int slarrf_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *l, LAPACK_REAL *ld, LAPACK_REAL *
              lld, LAPACK_INTEGER *ifirst, LAPACK_INTEGER *ilast, LAPACK_REAL *w, LAPACK_REAL *dplus, LAPACK_REAL *
              lplus, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int slarrv_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *l, LAPACK_INTEGER *isplit, 
              LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_INTEGER *iblock, LAPACK_REAL *gersch, LAPACK_REAL *tol, LAPACK_REAL *
              z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *isuppz, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int slartg_(LAPACK_REAL *f, LAPACK_REAL *g, LAPACK_REAL *cs, LAPACK_REAL *sn, LAPACK_REAL *r__);

  int slartv_(LAPACK_INTEGER *n, LAPACK_REAL *x, LAPACK_INTEGER *incx, LAPACK_REAL *y, 
              LAPACK_INTEGER *incy, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_INTEGER *incc);

  int slaruv_(LAPACK_INTEGER *iseed, LAPACK_INTEGER *n, LAPACK_REAL *x);

  int slarz_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *l, 
             LAPACK_REAL *v, LAPACK_INTEGER *incv, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *
             work);

  int slarzb_(char *side, char *trans, char *direct, char *
              storev, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_REAL *v, 
              LAPACK_INTEGER *ldv, LAPACK_REAL *t, LAPACK_INTEGER *ldt, LAPACK_REAL *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *
              work, LAPACK_INTEGER *ldwork);

  int slarzt_(char *direct, char *storev, LAPACK_INTEGER *n, LAPACK_INTEGER *
              k, LAPACK_REAL *v, LAPACK_INTEGER *ldv, LAPACK_REAL *tau, LAPACK_REAL *t, LAPACK_INTEGER *ldt);

  int slas2_(LAPACK_REAL *f, LAPACK_REAL *g, LAPACK_REAL *h__, LAPACK_REAL *ssmin, LAPACK_REAL *
             ssmax);

  int slascl_(char *type__, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_REAL *
              cfrom, LAPACK_REAL *cto, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *info);

  int slasd0_(LAPACK_INTEGER *n, LAPACK_INTEGER *sqre, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *vt, LAPACK_INTEGER *ldvt, LAPACK_INTEGER *smlsiz, 
              LAPACK_INTEGER *iwork, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int slasd1_(LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, LAPACK_INTEGER *sqre, LAPACK_REAL *
              d__, LAPACK_REAL *alpha, LAPACK_REAL *beta, LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *vt, 
              LAPACK_INTEGER *ldvt, LAPACK_INTEGER *idxq, LAPACK_INTEGER *iwork, LAPACK_REAL *work, LAPACK_INTEGER *
              info);

  int slasd2_(LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, LAPACK_INTEGER *sqre, LAPACK_INTEGER 
              *k, LAPACK_REAL *d__, LAPACK_REAL *z__, LAPACK_REAL *alpha, LAPACK_REAL *beta, LAPACK_REAL *u, LAPACK_INTEGER *
              ldu, LAPACK_REAL *vt, LAPACK_INTEGER *ldvt, LAPACK_REAL *dsigma, LAPACK_REAL *u2, LAPACK_INTEGER *ldu2, 
              LAPACK_REAL *vt2, LAPACK_INTEGER *ldvt2, LAPACK_INTEGER *idxp, LAPACK_INTEGER *idx, LAPACK_INTEGER *idxc,
              LAPACK_INTEGER *idxq, LAPACK_INTEGER *coltyp, LAPACK_INTEGER *info);

  int slasd3_(LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, LAPACK_INTEGER *sqre, LAPACK_INTEGER 
              *k, LAPACK_REAL *d__, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *dsigma, LAPACK_REAL *u, LAPACK_INTEGER *
              ldu, LAPACK_REAL *u2, LAPACK_INTEGER *ldu2, LAPACK_REAL *vt, LAPACK_INTEGER *ldvt, LAPACK_REAL *vt2, 
              LAPACK_INTEGER *ldvt2, LAPACK_INTEGER *idxc, LAPACK_INTEGER *ctot, LAPACK_REAL *z__, LAPACK_INTEGER *
              info);

  int slasd4_(LAPACK_INTEGER *n, LAPACK_INTEGER *i__, LAPACK_REAL *d__, LAPACK_REAL *z__, 
              LAPACK_REAL *delta, LAPACK_REAL *rho, LAPACK_REAL *sigma, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int slasd5_(LAPACK_INTEGER *i__, LAPACK_REAL *d__, LAPACK_REAL *z__, LAPACK_REAL *delta, 
              LAPACK_REAL *rho, LAPACK_REAL *dsigma, LAPACK_REAL *work);

  int slasd6_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, 
              LAPACK_INTEGER *sqre, LAPACK_REAL *d__, LAPACK_REAL *vf, LAPACK_REAL *vl, LAPACK_REAL *alpha, LAPACK_REAL *beta,
              LAPACK_INTEGER *idxq, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, 
              LAPACK_INTEGER *ldgcol, LAPACK_REAL *givnum, LAPACK_INTEGER *ldgnum, LAPACK_REAL *poles, LAPACK_REAL *
              difl, LAPACK_REAL *difr, LAPACK_REAL *z__, LAPACK_INTEGER *k, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_REAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int slasd7_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, 
              LAPACK_INTEGER *sqre, LAPACK_INTEGER *k, LAPACK_REAL *d__, LAPACK_REAL *z__, LAPACK_REAL *zw, LAPACK_REAL *vf, 
              LAPACK_REAL *vfw, LAPACK_REAL *vl, LAPACK_REAL *vlw, LAPACK_REAL *alpha, LAPACK_REAL *beta, LAPACK_REAL *dsigma,
              LAPACK_INTEGER *idx, LAPACK_INTEGER *idxp, LAPACK_INTEGER *idxq, LAPACK_INTEGER *perm, LAPACK_INTEGER *
              givptr, LAPACK_INTEGER *givcol, LAPACK_INTEGER *ldgcol, LAPACK_REAL *givnum, LAPACK_INTEGER *
              ldgnum, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_INTEGER *info);

  int slasd8_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *k, LAPACK_REAL *d__, LAPACK_REAL *
              z__, LAPACK_REAL *vf, LAPACK_REAL *vl, LAPACK_REAL *difl, LAPACK_REAL *difr, LAPACK_INTEGER *lddifr, 
              LAPACK_REAL *dsigma, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int slasd9_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *ldu, LAPACK_INTEGER *k, LAPACK_REAL *
              d__, LAPACK_REAL *z__, LAPACK_REAL *vf, LAPACK_REAL *vl, LAPACK_REAL *difl, LAPACK_REAL *difr, LAPACK_REAL *
              dsigma, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int slasda_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *sqre, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *vt, 
              LAPACK_INTEGER *k, LAPACK_REAL *difl, LAPACK_REAL *difr, LAPACK_REAL *z__, LAPACK_REAL *poles, LAPACK_INTEGER *
              givptr, LAPACK_INTEGER *givcol, LAPACK_INTEGER *ldgcol, LAPACK_INTEGER *perm, LAPACK_REAL *givnum,
              LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int slasdq_(char *uplo, LAPACK_INTEGER *sqre, LAPACK_INTEGER *n, LAPACK_INTEGER *
              ncvt, LAPACK_INTEGER *nru, LAPACK_INTEGER *ncc, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *vt, 
              LAPACK_INTEGER *ldvt, LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *
              work, LAPACK_INTEGER *info);

  int slasdt_(LAPACK_INTEGER *n, LAPACK_INTEGER *lvl, LAPACK_INTEGER *nd, LAPACK_INTEGER *
              inode, LAPACK_INTEGER *ndiml, LAPACK_INTEGER *ndimr, LAPACK_INTEGER *msub);

  int slaset_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *alpha, 
              LAPACK_REAL *beta, LAPACK_REAL *a, LAPACK_INTEGER *lda);

  int slasq1_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *work, 
              LAPACK_INTEGER *info);

  int slasq2_(LAPACK_INTEGER *n, LAPACK_REAL *z__, LAPACK_INTEGER *info);

  int slasq3_(LAPACK_INTEGER *i0, LAPACK_INTEGER *n0, LAPACK_REAL *z__, LAPACK_INTEGER *pp,
              LAPACK_REAL *dmin__, LAPACK_REAL *sigma, LAPACK_REAL *desig, LAPACK_REAL *qmax, LAPACK_INTEGER *nfail, 
              LAPACK_INTEGER *iter, LAPACK_INTEGER *ndiv, LAPACK_LOGICAL *ieee);

  int slasq4_(LAPACK_INTEGER *i0, LAPACK_INTEGER *n0, LAPACK_REAL *z__, LAPACK_INTEGER *pp,
              LAPACK_INTEGER *n0in, LAPACK_REAL *dmin__, LAPACK_REAL *dmin1, LAPACK_REAL *dmin2, LAPACK_REAL *dn, 
              LAPACK_REAL *dn1, LAPACK_REAL *dn2, LAPACK_REAL *tau, LAPACK_INTEGER *ttype);

  int slasq5_(LAPACK_INTEGER *i0, LAPACK_INTEGER *n0, LAPACK_REAL *z__, LAPACK_INTEGER *pp,
              LAPACK_REAL *tau, LAPACK_REAL *dmin__, LAPACK_REAL *dmin1, LAPACK_REAL *dmin2, LAPACK_REAL *dn, LAPACK_REAL *
              dnm1, LAPACK_REAL *dnm2, LAPACK_LOGICAL *ieee);

  int slasq6_(LAPACK_INTEGER *i0, LAPACK_INTEGER *n0, LAPACK_REAL *z__, LAPACK_INTEGER *pp,
              LAPACK_REAL *dmin__, LAPACK_REAL *dmin1, LAPACK_REAL *dmin2, LAPACK_REAL *dn, LAPACK_REAL *dnm1, LAPACK_REAL *
              dnm2);

  int slasr_(char *side, char *pivot, char *direct, LAPACK_INTEGER *m,
             LAPACK_INTEGER *n, LAPACK_REAL *c__, LAPACK_REAL *s, LAPACK_REAL *a, LAPACK_INTEGER *lda);

  int slasrt_(char *id, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_INTEGER *info);

  int slassq_(LAPACK_INTEGER *n, LAPACK_REAL *x, LAPACK_INTEGER *incx, LAPACK_REAL *scale, 
              LAPACK_REAL *sumsq);

  int slasv2_(LAPACK_REAL *f, LAPACK_REAL *g, LAPACK_REAL *h__, LAPACK_REAL *ssmin, LAPACK_REAL *
              ssmax, LAPACK_REAL *snr, LAPACK_REAL *csr, LAPACK_REAL *snl, LAPACK_REAL *csl);

  int slaswp_(LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *k1, 
              LAPACK_INTEGER *k2, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *incx);

  int slasy2_(LAPACK_LOGICAL *ltranl, LAPACK_LOGICAL *ltranr, LAPACK_INTEGER *isgn, 
              LAPACK_INTEGER *n1, LAPACK_INTEGER *n2, LAPACK_REAL *tl, LAPACK_INTEGER *ldtl, LAPACK_REAL *tr, LAPACK_INTEGER *
              ldtr, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *scale, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL 
              *xnorm, LAPACK_INTEGER *info);

  int slasyf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_INTEGER *kb,
              LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_REAL *w, LAPACK_INTEGER *ldw, LAPACK_INTEGER 
              *info);

  int slatbs_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *x, 
              LAPACK_REAL *scale, LAPACK_REAL *cnorm, LAPACK_INTEGER *info);

  int slatdf_(LAPACK_INTEGER *ijob, LAPACK_INTEGER *n, LAPACK_REAL *z__, LAPACK_INTEGER *
              ldz, LAPACK_REAL *rhs, LAPACK_REAL *rdsum, LAPACK_REAL *rdscal, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *
              jpiv);

  int slatps_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_REAL *x, LAPACK_REAL *scale, LAPACK_REAL *cnorm, 
              LAPACK_INTEGER *info);

  int slatrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *e, LAPACK_REAL *tau, LAPACK_REAL *w, LAPACK_INTEGER *ldw);

  int slatrs_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *x, LAPACK_REAL *scale, LAPACK_REAL 
              *cnorm, LAPACK_INTEGER *info);

  int slatrz_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *l, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work);

  int slatzm_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *v, 
              LAPACK_INTEGER *incv, LAPACK_REAL *tau, LAPACK_REAL *c1, LAPACK_REAL *c2, LAPACK_INTEGER *ldc, LAPACK_REAL *
              work);

  int slauu2_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *info);

  int slauum_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *info);

  int sopgtr_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_REAL *tau, 
              LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sopmtr_(char *side, char *uplo, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc, LAPACK_REAL *work, 
              LAPACK_INTEGER *info);

  int sorg2l_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sorg2r_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sorgbr_(char *vect, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER 
              *info);

  int sorghr_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sorgl2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sorglq_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sorgql_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sorgqr_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sorgr2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sorgrq_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sorgtr_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sorm2l_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sorm2r_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sormbr_(char *vect, char *side, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, 
              LAPACK_INTEGER *ldc, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sormhr_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sorml2_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sormlq_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sormql_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sormqr_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sormr2_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sormr3_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, 
              LAPACK_INTEGER *ldc, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sormrq_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sormrz_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, 
              LAPACK_INTEGER *ldc, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int sormtr_(char *side, char *uplo, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *tau, LAPACK_REAL *c__, LAPACK_INTEGER *ldc,
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int spbcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_REAL *ab, 
              LAPACK_INTEGER *ldab, LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int spbequ_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_REAL *ab, 
              LAPACK_INTEGER *ldab, LAPACK_REAL *s, LAPACK_REAL *scond, LAPACK_REAL *amax, LAPACK_INTEGER *info);

  int spbrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
              nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *afb, LAPACK_INTEGER *ldafb, LAPACK_REAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int spbstf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_REAL *ab, 
              LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int spbsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
             nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int spbsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_INTEGER *nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *afb, LAPACK_INTEGER *ldafb, 
              char *equed, LAPACK_REAL *s, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, 
              LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int spbtf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_REAL *ab, 
              LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int spbtrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_REAL *ab, 
              LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int spbtrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
              nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int spocon_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int spoequ_(LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *s, LAPACK_REAL 
              *scond, LAPACK_REAL *amax, LAPACK_INTEGER *info);

  int sporfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *af, LAPACK_INTEGER *ldaf, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x,
              LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int sposv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
             LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sposvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *af, LAPACK_INTEGER *ldaf, char *equed, 
              LAPACK_REAL *s, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, 
              LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int spotf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *info);

  int spotrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *info);

  int spotri_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *info);

  int spotrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sppcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_REAL *anorm, 
              LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sppequ_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_REAL *s, LAPACK_REAL *
              scond, LAPACK_REAL *amax, LAPACK_INTEGER *info);

  int spprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *ap, 
              LAPACK_REAL *afp, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, 
              LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sppsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *ap, 
             LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sppsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_REAL *ap, LAPACK_REAL *afp, char *equed, LAPACK_REAL *s, LAPACK_REAL *b, LAPACK_INTEGER *
              ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL 
              *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int spptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_INTEGER *info);

  int spptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_INTEGER *info);

  int spptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *ap, 
              LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sptcon_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *anorm, 
              LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int spteqr_(char *compz, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sptrfs_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_REAL *df, LAPACK_REAL *ef, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, 
              LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sptsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__, LAPACK_REAL *e, 
             LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sptsvx_(char *fact, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__,
              LAPACK_REAL *e, LAPACK_REAL *df, LAPACK_REAL *ef, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER 
              *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int spttrf_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_INTEGER *info);

  int spttrs_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sptts2_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_REAL *b, LAPACK_INTEGER *ldb);

  int srscl_(LAPACK_INTEGER *n, LAPACK_REAL *sa, LAPACK_REAL *sx, LAPACK_INTEGER *incx);

  int ssbev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
             LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work,
             LAPACK_INTEGER *info);

  int ssbevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work,
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int ssbevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *vl,
              LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *
              w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              ifail, LAPACK_INTEGER *info);

  int ssbgst_(char *vect, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
              LAPACK_INTEGER *kb, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *bb, LAPACK_INTEGER *ldbb, LAPACK_REAL *
              x, LAPACK_INTEGER *ldx, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int ssbgv_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
             LAPACK_INTEGER *kb, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *bb, LAPACK_INTEGER *ldbb, LAPACK_REAL *
             w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int ssbgvd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
              LAPACK_INTEGER *kb, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *bb, LAPACK_INTEGER *ldbb, LAPACK_REAL *
              w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int ssbgvx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ka, LAPACK_INTEGER *kb, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *bb, LAPACK_INTEGER *
              ldbb, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER 
              *iu, LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL 
              *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int ssbtrd_(char *vect, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *q, LAPACK_INTEGER *ldq, 
              LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sspcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_INTEGER *ipiv, 
              LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sspev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, 
             LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sspevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, 
              LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER 
              *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int sspevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_REAL *ap, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, 
              LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int sspgst_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap,
              LAPACK_REAL *bp, LAPACK_INTEGER *info);

  int sspgv_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
             n, LAPACK_REAL *ap, LAPACK_REAL *bp, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, 
             LAPACK_INTEGER *info);

  int sspgvd_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
              n, LAPACK_REAL *ap, LAPACK_REAL *bp, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int sspgvx_(LAPACK_INTEGER *itype, char *jobz, char *range, char *
              uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_REAL *bp, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il,
              LAPACK_INTEGER *iu, LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *
              ldz, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int ssprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *ap, 
              LAPACK_REAL *afp, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *
              ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              info);

  int sspsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *ap, 
             LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sspsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_REAL *ap, LAPACK_REAL *afp, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL 
              *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int ssptrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_REAL *d__, 
              LAPACK_REAL *e, LAPACK_REAL *tau, LAPACK_INTEGER *info);

  int ssptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_INTEGER *ipiv, 
              LAPACK_INTEGER *info);

  int ssptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *ap, LAPACK_INTEGER *ipiv, 
              LAPACK_REAL *work, LAPACK_INTEGER *info);

  int ssptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *ap, 
              LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int sstebz_(char *range, char *order, LAPACK_INTEGER *n, LAPACK_REAL *vl, 
              LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_INTEGER *m, LAPACK_INTEGER *nsplit, LAPACK_REAL *w, LAPACK_INTEGER *iblock, LAPACK_INTEGER *
              isplit, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int sstedc_(char *compz, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int sstegr_(char *jobz, char *range, LAPACK_INTEGER *n, LAPACK_REAL *d__, 
              LAPACK_REAL *e, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, 
              LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *isuppz, LAPACK_REAL *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int sstein_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_INTEGER *m, LAPACK_REAL 
              *w, LAPACK_INTEGER *iblock, LAPACK_INTEGER *isplit, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int ssteqr_(char *compz, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, 
              LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int ssterf_(LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_INTEGER *info);

  int sstev_(char *jobz, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *
             z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int sstevd_(char *jobz, LAPACK_INTEGER *n, LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL 
              *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int sstevr_(char *jobz, char *range, LAPACK_INTEGER *n, LAPACK_REAL *d__, 
              LAPACK_REAL *e, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, 
              LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *isuppz, LAPACK_REAL *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int sstevx_(char *jobz, char *range, LAPACK_INTEGER *n, LAPACK_REAL *d__, 
              LAPACK_REAL *e, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, 
              LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int ssycon_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ipiv, LAPACK_REAL *anorm, LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int ssyev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, 
             LAPACK_INTEGER *lda, LAPACK_REAL *w, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int ssyevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *w, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int ssyevr_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, 
              LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *
              isuppz, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, 
              LAPACK_INTEGER *info);

  int ssyevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, 
              LAPACK_REAL *abstol, LAPACK_INTEGER *m, LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int ssygs2_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int ssygst_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int ssygv_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
             n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *w, LAPACK_REAL *work, 
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int ssygvd_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
              n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *w, LAPACK_REAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int ssygvx_(LAPACK_INTEGER *itype, char *jobz, char *range, char *
              uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *
              vl, LAPACK_REAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_REAL *abstol, LAPACK_INTEGER *m, 
              LAPACK_REAL *w, LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER 
              *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int ssyrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_REAL *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, 
              LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *
              work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int ssysv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
             LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *work, 
             LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int ssysvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *af, LAPACK_INTEGER *ldaf, LAPACK_INTEGER *ipiv, 
              LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *rcond, LAPACK_REAL *ferr,
              LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              info);

  int ssytd2_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *tau, LAPACK_INTEGER *info);

  int ssytf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int ssytrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *d__, LAPACK_REAL *e, LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int ssytrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ipiv, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int ssytri_(char *uplo, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ipiv, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int ssytrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int stbcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *rcond, LAPACK_REAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int stbrfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_INTEGER *nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *b, LAPACK_INTEGER 
              *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int stbtrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_INTEGER *nrhs, LAPACK_REAL *ab, LAPACK_INTEGER *ldab, LAPACK_REAL *b, LAPACK_INTEGER 
              *ldb, LAPACK_INTEGER *info);

  int stgevc_(char *side, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *vl, 
              LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_REAL 
              *work, LAPACK_INTEGER *info);

  int stgex2_(LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, LAPACK_REAL 
              *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *
              z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *j1, LAPACK_INTEGER *n1, LAPACK_INTEGER *n2, LAPACK_REAL *work, 
              LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int stgexc_(LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, LAPACK_REAL 
              *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *
              z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *ifst, LAPACK_INTEGER *ilst, LAPACK_REAL *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *info);

  int stgsen_(LAPACK_INTEGER *ijob, LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, 
              LAPACK_LOGICAL *select, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *
              ldb, LAPACK_REAL *alphar, LAPACK_REAL *alphai, LAPACK_REAL *beta, LAPACK_REAL *q, LAPACK_INTEGER *ldq, 
              LAPACK_REAL *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *m, LAPACK_REAL *pl, LAPACK_REAL *pr, LAPACK_REAL *dif, 
              LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *
              info);

  int stgsja_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_REAL *a, LAPACK_INTEGER *lda,
              LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *tola, LAPACK_REAL *tolb, LAPACK_REAL *alpha, LAPACK_REAL *
              beta, LAPACK_REAL *u, LAPACK_INTEGER *ldu, LAPACK_REAL *v, LAPACK_INTEGER *ldv, LAPACK_REAL *q, LAPACK_INTEGER *
              ldq, LAPACK_REAL *work, LAPACK_INTEGER *ncycle, LAPACK_INTEGER *info);

  int stgsna_(char *job, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *vl, 
              LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, LAPACK_INTEGER *ldvr, LAPACK_REAL *s, LAPACK_REAL *dif, LAPACK_INTEGER *
              mm, LAPACK_INTEGER *m, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              info);

  int stgsy2_(char *trans, LAPACK_INTEGER *ijob, LAPACK_INTEGER *m, LAPACK_INTEGER *
              n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *c__, LAPACK_INTEGER *
              ldc, LAPACK_REAL *d__, LAPACK_INTEGER *ldd, LAPACK_REAL *e, LAPACK_INTEGER *lde, LAPACK_REAL *f, LAPACK_INTEGER 
              *ldf, LAPACK_REAL *scale, LAPACK_REAL *rdsum, LAPACK_REAL *rdscal, LAPACK_INTEGER *iwork, LAPACK_INTEGER 
              *pq, LAPACK_INTEGER *info);

  int stgsyl_(char *trans, LAPACK_INTEGER *ijob, LAPACK_INTEGER *m, LAPACK_INTEGER *
              n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *c__, LAPACK_INTEGER *
              ldc, LAPACK_REAL *d__, LAPACK_INTEGER *ldd, LAPACK_REAL *e, LAPACK_INTEGER *lde, LAPACK_REAL *f, LAPACK_INTEGER 
              *ldf, LAPACK_REAL *scale, LAPACK_REAL *dif, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *info);

  int stpcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_REAL *ap, LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int stprfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_REAL *ap, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, LAPACK_INTEGER *ldx,
              LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int stptri_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_REAL *ap, 
              LAPACK_INTEGER *info);

  int stptrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_REAL *ap, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int strcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *rcond, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int strevc_(char *side, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_REAL *t, LAPACK_INTEGER *ldt, LAPACK_REAL *vl, LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, 
              LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_REAL *work, LAPACK_INTEGER *info);

  int strexc_(char *compq, LAPACK_INTEGER *n, LAPACK_REAL *t, LAPACK_INTEGER *ldt, 
              LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *ifst, LAPACK_INTEGER *ilst, LAPACK_REAL *work, 
              LAPACK_INTEGER *info);

  int strrfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *x, 
              LAPACK_INTEGER *ldx, LAPACK_REAL *ferr, LAPACK_REAL *berr, LAPACK_REAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *info);

  int strsen_(char *job, char *compq, LAPACK_LOGICAL *select, LAPACK_INTEGER 
              *n, LAPACK_REAL *t, LAPACK_INTEGER *ldt, LAPACK_REAL *q, LAPACK_INTEGER *ldq, LAPACK_REAL *wr, LAPACK_REAL *wi, 
              LAPACK_INTEGER *m, LAPACK_REAL *s, LAPACK_REAL *sep, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int strsna_(char *job, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_REAL *t, LAPACK_INTEGER *ldt, LAPACK_REAL *vl, LAPACK_INTEGER *ldvl, LAPACK_REAL *vr, 
              LAPACK_INTEGER *ldvr, LAPACK_REAL *s, LAPACK_REAL *sep, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_REAL *
              work, LAPACK_INTEGER *ldwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int strsyl_(char *trana, char *tranb, LAPACK_INTEGER *isgn, LAPACK_INTEGER 
              *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_REAL *
              c__, LAPACK_INTEGER *ldc, LAPACK_REAL *scale, LAPACK_INTEGER *info);

  int strti2_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int strtri_(char *uplo, char *diag, LAPACK_INTEGER *n, LAPACK_REAL *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int strtrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_REAL *a, LAPACK_INTEGER *lda, LAPACK_REAL *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
              info);

  int stzrqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_INTEGER *info);

  int stzrzf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_REAL *a, LAPACK_INTEGER *lda, 
              LAPACK_REAL *tau, LAPACK_REAL *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int xerbla_(char *srname, LAPACK_INTEGER *info);

  int zbdsqr_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ncvt, LAPACK_INTEGER *
              nru, LAPACK_INTEGER *ncc, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *vt, 
              LAPACK_INTEGER *ldvt, LAPACK_DOUBLECOMPLEX *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLECOMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zdrot_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *cx, LAPACK_INTEGER *incx, 
             LAPACK_DOUBLECOMPLEX *cy, LAPACK_INTEGER *incy, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s);

  int zdrscl_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *sa, LAPACK_DOUBLECOMPLEX *sx, 
              LAPACK_INTEGER *incx);

  int zgbbrd_(char *vect, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *ncc,
              LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, 
              LAPACK_DOUBLECOMPLEX *pt, LAPACK_INTEGER *ldpt, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgbcon_(char *norm, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *anorm, 
              LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int zgbequ_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *rowcnd, LAPACK_DOUBLEREAL *colcnd, LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *
              info);

  int zgbrfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *
              ku, LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLECOMPLEX *
              afb, LAPACK_INTEGER *ldafb, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgbsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, LAPACK_INTEGER *
             nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *
             b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int zgbsvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl,
              LAPACK_INTEGER *ku, LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, 
              LAPACK_DOUBLECOMPLEX *afb, LAPACK_INTEGER *ldafb, LAPACK_INTEGER *ipiv, char *equed, 
              LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int zgbtf2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int zgbtrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int zgbtrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *
              ku, LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *ipiv, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int zgebak_(char *job, char *side, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, 
              LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *scale, LAPACK_INTEGER *m, LAPACK_DOUBLECOMPLEX *v, 
              LAPACK_INTEGER *ldv, LAPACK_INTEGER *info);

  int zgebal_(char *job, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER 
              *lda, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *scale, LAPACK_INTEGER *info);

  int zgebd2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *tauq, 
              LAPACK_DOUBLECOMPLEX *taup, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zgebrd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *tauq, 
              LAPACK_DOUBLECOMPLEX *taup, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *
              info);

  int zgecon_(char *norm, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgeequ_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *rowcnd, 
              LAPACK_DOUBLEREAL *colcnd, LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *info);

  int zgees_(char *jobvs, char *sort, LAPACK_L_FP select, LAPACK_INTEGER *n, 
             LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *sdim, LAPACK_DOUBLECOMPLEX *w, 
             LAPACK_DOUBLECOMPLEX *vs, LAPACK_INTEGER *ldvs, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
             LAPACK_DOUBLEREAL *rwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int zgeesx_(char *jobvs, char *sort, LAPACK_L_FP select, char *
              sense, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *sdim, 
              LAPACK_DOUBLECOMPLEX *w, LAPACK_DOUBLECOMPLEX *vs, LAPACK_INTEGER *ldvs, LAPACK_DOUBLEREAL *
              rconde, LAPACK_DOUBLEREAL *rcondv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, 
              LAPACK_DOUBLEREAL *rwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int zgeev_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, 
             const LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, const LAPACK_DOUBLECOMPLEX *w, const LAPACK_DOUBLECOMPLEX *vl, 
             LAPACK_INTEGER *ldvl, const LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *ldvr, const LAPACK_DOUBLECOMPLEX *work, 
             LAPACK_INTEGER *lwork, const LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgeevx_(char *balanc, char *jobvl, char *jobvr, char *
              sense, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *w, 
              LAPACK_DOUBLECOMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *ldvr, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *abnrm, 
              LAPACK_DOUBLEREAL *rconde, LAPACK_DOUBLEREAL *rcondv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *
              lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgegs_(char *jobvsl, char *jobvsr, LAPACK_INTEGER *n, 
             LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
             LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *beta, LAPACK_DOUBLECOMPLEX *vsl, 
             LAPACK_INTEGER *ldvsl, LAPACK_DOUBLECOMPLEX *vsr, LAPACK_INTEGER *ldvsr, LAPACK_DOUBLECOMPLEX *
             work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgegv_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, 
             LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
             LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *beta, LAPACK_DOUBLECOMPLEX *vl, LAPACK_INTEGER 
             *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER 
             *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgehd2_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *info);

  int zgehrd_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zgelq2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zgelqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zgels_(char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *
             nrhs, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
             LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zgelsx_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *jpvt, LAPACK_DOUBLEREAL *rcond, LAPACK_INTEGER *rank, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgelsy_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *jpvt, LAPACK_DOUBLEREAL *rcond, LAPACK_INTEGER *rank, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgeql2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zgeqlf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zgeqp3_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgeqpf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgeqr2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zgeqrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zgerfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *af, LAPACK_INTEGER *ldaf, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, 
              LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work,
              LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgerq2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zgerqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zgesc2_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLECOMPLEX *rhs, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *jpiv, LAPACK_DOUBLEREAL *scale);

  int zgesv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *a, 
             LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *
             info);

  int zgesvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *af, LAPACK_INTEGER *
              ldaf, LAPACK_INTEGER *ipiv, char *equed, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgetc2_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *jpiv, LAPACK_INTEGER *info);

  int zgetf2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int zgetrf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int zgetri_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zgetrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int zggbak_(char *job, char *side, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, 
              LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *lscale, LAPACK_DOUBLEREAL *rscale, LAPACK_INTEGER *m, 
              LAPACK_DOUBLECOMPLEX *v, LAPACK_INTEGER *ldv, LAPACK_INTEGER *info);

  int zggbal_(char *job, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER 
              *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, 
              LAPACK_DOUBLEREAL *lscale, LAPACK_DOUBLEREAL *rscale, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *
              info);

  int zgges_(char *jobvsl, char *jobvsr, char *sort, LAPACK_L_FP 
             delctg, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, 
             LAPACK_INTEGER *ldb, LAPACK_INTEGER *sdim, LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *
             beta, LAPACK_DOUBLECOMPLEX *vsl, LAPACK_INTEGER *ldvsl, LAPACK_DOUBLECOMPLEX *vsr, LAPACK_INTEGER 
             *ldvsr, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, 
             LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int zggesx_(char *jobvsl, char *jobvsr, char *sort, LAPACK_L_FP 
              delctg, char *sense, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *sdim, LAPACK_DOUBLECOMPLEX *alpha, 
              LAPACK_DOUBLECOMPLEX *beta, LAPACK_DOUBLECOMPLEX *vsl, LAPACK_INTEGER *ldvsl, 
              LAPACK_DOUBLECOMPLEX *vsr, LAPACK_INTEGER *ldvsr, LAPACK_DOUBLEREAL *rconde, LAPACK_DOUBLEREAL *
              rcondv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, 
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int zggev_(char *jobvl, char *jobvr, LAPACK_INTEGER *n, 
             LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
             LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *beta, LAPACK_DOUBLECOMPLEX *vl, LAPACK_INTEGER 
             *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER 
             *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zggevx_(char *balanc, char *jobvl, char *jobvr, char *
              sense, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *beta, 
              LAPACK_DOUBLECOMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *ldvr, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLEREAL *lscale, LAPACK_DOUBLEREAL *rscale, 
              LAPACK_DOUBLEREAL *abnrm, LAPACK_DOUBLEREAL *bbnrm, LAPACK_DOUBLEREAL *rconde, LAPACK_DOUBLEREAL *
              rcondv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, 
              LAPACK_INTEGER *iwork, LAPACK_LOGICAL *bwork, LAPACK_INTEGER *info);

  int zggglm_(LAPACK_INTEGER *n, LAPACK_INTEGER *m, LAPACK_INTEGER *p, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *d__, LAPACK_DOUBLECOMPLEX *x, LAPACK_DOUBLECOMPLEX *y, LAPACK_DOUBLECOMPLEX 
              *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zgghrd_(char *compq, char *compz, LAPACK_INTEGER *n, LAPACK_INTEGER *
              ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *z__, 
              LAPACK_INTEGER *ldz, LAPACK_INTEGER *info);

  int zgglse_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *p, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_DOUBLECOMPLEX *d__, LAPACK_DOUBLECOMPLEX *x, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zggqrf_(LAPACK_INTEGER *n, LAPACK_INTEGER *m, LAPACK_INTEGER *p, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *taua, LAPACK_DOUBLECOMPLEX *b,
              LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *taub, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *info);

  int zggrqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *p, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *taua, LAPACK_DOUBLECOMPLEX *b,
              LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *taub, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *info);

  int zggsvd_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_INTEGER *p, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *alpha, 
              LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLECOMPLEX *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLECOMPLEX *v, 
              LAPACK_INTEGER *ldv, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int zggsvp_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX 
              *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *tola, LAPACK_DOUBLEREAL *tolb, LAPACK_INTEGER *k, 
              LAPACK_INTEGER *l, LAPACK_DOUBLECOMPLEX *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLECOMPLEX *v, LAPACK_INTEGER 
              *ldv, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *iwork, LAPACK_DOUBLEREAL *
              rwork, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zgtcon_(char *norm, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *dl, 
              LAPACK_DOUBLECOMPLEX *d__, LAPACK_DOUBLECOMPLEX *du, LAPACK_DOUBLECOMPLEX *du2, LAPACK_INTEGER *
              ipiv, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_INTEGER *info);

  int zgtrfs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *dl, LAPACK_DOUBLECOMPLEX *d__, LAPACK_DOUBLECOMPLEX *du, 
              LAPACK_DOUBLECOMPLEX *dlf, LAPACK_DOUBLECOMPLEX *df, LAPACK_DOUBLECOMPLEX *duf, 
              LAPACK_DOUBLECOMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zgtsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *dl, 
             LAPACK_DOUBLECOMPLEX *d__, LAPACK_DOUBLECOMPLEX *du, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb,
             LAPACK_INTEGER *info);

  int zgtsvx_(char *fact, char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *dl, LAPACK_DOUBLECOMPLEX *d__, LAPACK_DOUBLECOMPLEX *du, 
              LAPACK_DOUBLECOMPLEX *dlf, LAPACK_DOUBLECOMPLEX *df, LAPACK_DOUBLECOMPLEX *duf, 
              LAPACK_DOUBLECOMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int zgttrf_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *dl, LAPACK_DOUBLECOMPLEX *
              d__, LAPACK_DOUBLECOMPLEX *du, LAPACK_DOUBLECOMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *
              info);

  int zgttrs_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *dl, LAPACK_DOUBLECOMPLEX *d__, LAPACK_DOUBLECOMPLEX *du, 
              LAPACK_DOUBLECOMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int zgtts2_(LAPACK_INTEGER *itrans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *dl, LAPACK_DOUBLECOMPLEX *d__, LAPACK_DOUBLECOMPLEX *du, 
              LAPACK_DOUBLECOMPLEX *du2, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb);

  int zhbev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
             LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__, 
             LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zhbevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__, 
              LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, 
              LAPACK_INTEGER *lrwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int zhbevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLECOMPLEX *q, 
              LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *
              iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__,
              LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *iwork,
              LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int zhbgst_(char *vect, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
              LAPACK_INTEGER *kb, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLECOMPLEX *bb, 
              LAPACK_INTEGER *ldbb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zhbgv_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *ka, 
             LAPACK_INTEGER *kb, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLECOMPLEX *bb, 
             LAPACK_INTEGER *ldbb, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, 
             LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zhbgvx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ka, LAPACK_INTEGER *kb, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, 
              LAPACK_DOUBLECOMPLEX *bb, LAPACK_INTEGER *ldbb, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, 
              LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *
              abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              ifail, LAPACK_INTEGER *info);

  int zhbtrd_(char *vect, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zhecon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zheev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX 
             *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, 
             LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zheevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int zheevr_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, 
              LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *
              w, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_INTEGER *isuppz, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *
              iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int zheevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, 
              LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *
              w, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *
              lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *
              info);

  int zhegs2_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int zhegst_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int zhegv_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
             n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
             LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork,
             LAPACK_INTEGER *info);

  int zhegvd_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
              n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork,
              LAPACK_INTEGER *lrwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int zhegvx_(LAPACK_INTEGER *itype, char *jobz, char *range, char *
              uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *
              iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__,
              LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork,
              LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int zherfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *af, LAPACK_INTEGER *ldaf, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, 
              LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work,
              LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zhesv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
             LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, 
             LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zhesvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *af, LAPACK_INTEGER *
              ldaf, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x,
              LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zhetf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int zhetrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zhetrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int zhetri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zhetrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int zhgeqz_(char *job, char *compq, char *compz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *
              beta, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *
              ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int zhpcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *info);

  int zhpev_(char *jobz, char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX 
             *ap, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *
             work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zhpevd_(char *jobz, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              lrwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int zhpevx_(char *jobz, char *range, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLEREAL *vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, 
              LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, 
              LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *
              rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int zhpgst_(LAPACK_INTEGER *itype, char *uplo, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *bp, LAPACK_INTEGER *info);

  int zhpgv_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
             n, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *bp, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX 
             *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
             info);

  int zhpgvd_(LAPACK_INTEGER *itype, char *jobz, char *uplo, LAPACK_INTEGER *
              n, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *bp, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX 
              *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *
              rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, LAPACK_INTEGER *
              info);

  int zhpgvx_(LAPACK_INTEGER *itype, char *jobz, char *range, char *
              uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *bp, LAPACK_DOUBLEREAL *
              vl, LAPACK_DOUBLEREAL *vu, LAPACK_INTEGER *il, LAPACK_INTEGER *iu, LAPACK_DOUBLEREAL *abstol, 
              LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *
              ifail, LAPACK_INTEGER *info);

  int zhprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *afp, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *
              b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int zhpsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
             LAPACK_DOUBLECOMPLEX *ap, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
             LAPACK_INTEGER *info);

  int zhpsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *afp, LAPACK_INTEGER *ipiv, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zhptrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *tau, LAPACK_INTEGER *info);

  int zhptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int zhptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zhptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int zhsein_(char *side, char *eigsrc, char *initv, LAPACK_LOGICAL *
              select, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *h__, LAPACK_INTEGER *ldh, LAPACK_DOUBLECOMPLEX *
              w, LAPACK_DOUBLECOMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *ldvr,
              LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, 
              LAPACK_INTEGER *ifaill, LAPACK_INTEGER *ifailr, LAPACK_INTEGER *info);

  int zhseqr_(char *job, char *compz, LAPACK_INTEGER *n, LAPACK_INTEGER *ilo,
              LAPACK_INTEGER *ihi, LAPACK_DOUBLECOMPLEX *h__, LAPACK_INTEGER *ldh, LAPACK_DOUBLECOMPLEX *w, 
              LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zlabrd_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_DOUBLECOMPLEX *tauq, LAPACK_DOUBLECOMPLEX *taup, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *
              ldx, LAPACK_DOUBLECOMPLEX *y, LAPACK_INTEGER *ldy);

  int zlacgv_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx);

  int zlacon_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *v, LAPACK_DOUBLECOMPLEX *x, 
              LAPACK_DOUBLEREAL *est, LAPACK_INTEGER *kase);

  int zlacp2_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *
              a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb);

  int zlacpy_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb);

  int zlacrm_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *rwork);

  int zlacrt_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *cx, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLECOMPLEX *cy, LAPACK_INTEGER *incy, LAPACK_DOUBLECOMPLEX *c__, LAPACK_DOUBLECOMPLEX *
              s);

  int zlaed0_(LAPACK_INTEGER *qsiz, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *qstore, 
              LAPACK_INTEGER *ldqs, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int zlaed7_(LAPACK_INTEGER *n, LAPACK_INTEGER *cutpnt, LAPACK_INTEGER *qsiz, 
              LAPACK_INTEGER *tlvls, LAPACK_INTEGER *curlvl, LAPACK_INTEGER *curpbm, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *rho, LAPACK_INTEGER *indxq, 
              LAPACK_DOUBLEREAL *qstore, LAPACK_INTEGER *qptr, LAPACK_INTEGER *prmptr, LAPACK_INTEGER *perm, 
              LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_DOUBLEREAL *givnum, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int zlaed8_(LAPACK_INTEGER *k, LAPACK_INTEGER *n, LAPACK_INTEGER *qsiz, 
              LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *rho, 
              LAPACK_INTEGER *cutpnt, LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *dlamda, LAPACK_DOUBLECOMPLEX *
              q2, LAPACK_INTEGER *ldq2, LAPACK_DOUBLEREAL *w, LAPACK_INTEGER *indxp, LAPACK_INTEGER *indx, 
              LAPACK_INTEGER *indxq, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, 
              LAPACK_DOUBLEREAL *givnum, LAPACK_INTEGER *info);

  int zlaein_(LAPACK_LOGICAL *rightv, LAPACK_LOGICAL *noinit, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *h__, LAPACK_INTEGER *ldh, LAPACK_DOUBLECOMPLEX *w, LAPACK_DOUBLECOMPLEX *v, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *rwork, LAPACK_DOUBLEREAL *eps3, 
              LAPACK_DOUBLEREAL *smlnum, LAPACK_INTEGER *info);

  int zlaesy_(LAPACK_DOUBLECOMPLEX *a, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_DOUBLECOMPLEX *rt1, LAPACK_DOUBLECOMPLEX *rt2, 
              LAPACK_DOUBLECOMPLEX *evscal, LAPACK_DOUBLECOMPLEX *cs1, LAPACK_DOUBLECOMPLEX *sn1);

  int zlaev2_(LAPACK_DOUBLECOMPLEX *a, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_DOUBLEREAL *rt1, LAPACK_DOUBLEREAL *rt2, LAPACK_DOUBLEREAL *cs1,
              LAPACK_DOUBLECOMPLEX *sn1);

  int zlags2_(LAPACK_LOGICAL *upper, LAPACK_DOUBLEREAL *a1, LAPACK_DOUBLECOMPLEX *
              a2, LAPACK_DOUBLEREAL *a3, LAPACK_DOUBLEREAL *b1, LAPACK_DOUBLECOMPLEX *b2, LAPACK_DOUBLEREAL *b3,
              LAPACK_DOUBLEREAL *csu, LAPACK_DOUBLECOMPLEX *snu, LAPACK_DOUBLEREAL *csv, LAPACK_DOUBLECOMPLEX *
              snv, LAPACK_DOUBLEREAL *csq, LAPACK_DOUBLECOMPLEX *snq);

  int zlagtm_(char *trans, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLECOMPLEX *dl, LAPACK_DOUBLECOMPLEX *d__, 
              LAPACK_DOUBLECOMPLEX *du, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *beta, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb);

  int zlahef_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_INTEGER *kb,
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *w, 
              LAPACK_INTEGER *ldw, LAPACK_INTEGER *info);

  int zlahqr_(LAPACK_LOGICAL *wantt, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLECOMPLEX *h__, LAPACK_INTEGER *ldh, 
              LAPACK_DOUBLECOMPLEX *w, LAPACK_INTEGER *iloz, LAPACK_INTEGER *ihiz, LAPACK_DOUBLECOMPLEX *z__, 
              LAPACK_INTEGER *ldz, LAPACK_INTEGER *info);

  int zlahrd_(LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *nb, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *t, 
              LAPACK_INTEGER *ldt, LAPACK_DOUBLECOMPLEX *y, LAPACK_INTEGER *ldy);

  int zlaic1_(LAPACK_INTEGER *job, LAPACK_INTEGER *j, LAPACK_DOUBLECOMPLEX *x, 
              LAPACK_DOUBLEREAL *sest, LAPACK_DOUBLECOMPLEX *w, LAPACK_DOUBLECOMPLEX *gamma, LAPACK_DOUBLEREAL *
              sestpr, LAPACK_DOUBLECOMPLEX *s, LAPACK_DOUBLECOMPLEX *c__);

  int zlals0_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *nl, LAPACK_INTEGER *nr, 
              LAPACK_INTEGER *sqre, LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *bx, LAPACK_INTEGER *ldbx, LAPACK_INTEGER *perm, LAPACK_INTEGER *givptr, 
              LAPACK_INTEGER *givcol, LAPACK_INTEGER *ldgcol, LAPACK_DOUBLEREAL *givnum, LAPACK_INTEGER *ldgnum,
              LAPACK_DOUBLEREAL *poles, LAPACK_DOUBLEREAL *difl, LAPACK_DOUBLEREAL *difr, LAPACK_DOUBLEREAL *
              z__, LAPACK_INTEGER *k, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *rwork, 
              LAPACK_INTEGER *info);

  int zlalsa_(LAPACK_INTEGER *icompq, LAPACK_INTEGER *smlsiz, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *bx, 
              LAPACK_INTEGER *ldbx, LAPACK_DOUBLEREAL *u, LAPACK_INTEGER *ldu, LAPACK_DOUBLEREAL *vt, LAPACK_INTEGER *
              k, LAPACK_DOUBLEREAL *difl, LAPACK_DOUBLEREAL *difr, LAPACK_DOUBLEREAL *z__, LAPACK_DOUBLEREAL *
              poles, LAPACK_INTEGER *givptr, LAPACK_INTEGER *givcol, LAPACK_INTEGER *ldgcol, LAPACK_INTEGER *
              perm, LAPACK_DOUBLEREAL *givnum, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *
              rwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int zlapll_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLECOMPLEX *y, LAPACK_INTEGER *incy, LAPACK_DOUBLEREAL *ssmin);

  int zlapmt_(LAPACK_LOGICAL *forwrd, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_INTEGER *k);

  int zlaqgb_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku,
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, 
              LAPACK_DOUBLEREAL *rowcnd, LAPACK_DOUBLEREAL *colcnd, LAPACK_DOUBLEREAL *amax, char *equed);

  int zlaqge_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *r__, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *rowcnd, 
              LAPACK_DOUBLEREAL *colcnd, LAPACK_DOUBLEREAL *amax, char *equed);

  int zlaqhb_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, 
              LAPACK_DOUBLEREAL *amax, char *equed);

  int zlaqhe_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, 
              char *equed);

  int zlaqhp_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, char *equed);

  int zlaqp2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *offset, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLEREAL *vn1, LAPACK_DOUBLEREAL *vn2, LAPACK_DOUBLECOMPLEX *work);

  int zlaqps_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *offset, LAPACK_INTEGER 
              *nb, LAPACK_INTEGER *kb, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *jpvt, 
              LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLEREAL *vn1, LAPACK_DOUBLEREAL *vn2, LAPACK_DOUBLECOMPLEX *
              auxv, LAPACK_DOUBLECOMPLEX *f, LAPACK_INTEGER *ldf);

  int zlaqsb_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, 
              LAPACK_DOUBLEREAL *amax, char *equed);

  int zlaqsp_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, char *equed);

  int zlaqsy_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, 
              char *equed);

  int zlar1v_(LAPACK_INTEGER *n, LAPACK_INTEGER *b1, LAPACK_INTEGER *bn, LAPACK_DOUBLEREAL 
              *sigma, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *l, LAPACK_DOUBLEREAL *ld, LAPACK_DOUBLEREAL *
              lld, LAPACK_DOUBLEREAL *gersch, LAPACK_DOUBLECOMPLEX *z__, LAPACK_DOUBLEREAL *ztz, 
              LAPACK_DOUBLEREAL *mingma, LAPACK_INTEGER *r__, LAPACK_INTEGER *isuppz, LAPACK_DOUBLEREAL *work);

  int zlar2v_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *x, LAPACK_DOUBLECOMPLEX *y, 
              LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *incx, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLECOMPLEX *s, 
              LAPACK_INTEGER *incc);

  int zlarcm_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *a, LAPACK_INTEGER *
              lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc,
              LAPACK_DOUBLEREAL *rwork);

  int zlarf_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX 
             *v, LAPACK_INTEGER *incv, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *
             ldc, LAPACK_DOUBLECOMPLEX *work);

  int zlarfb_(char *side, char *trans, char *direct, char *
              storev, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *v, LAPACK_INTEGER 
              *ldv, LAPACK_DOUBLECOMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *
              ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *ldwork);

  int zlarfg_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *
              x, LAPACK_INTEGER *incx, LAPACK_DOUBLECOMPLEX *tau);

  int zlarft_(char *direct, char *storev, LAPACK_INTEGER *n, LAPACK_INTEGER *
              k, LAPACK_DOUBLECOMPLEX *v, LAPACK_INTEGER *ldv, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              t, LAPACK_INTEGER *ldt);

  int zlarfx_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *v, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *
              ldc, LAPACK_DOUBLECOMPLEX *work);

  int zlargv_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLECOMPLEX *y, LAPACK_INTEGER *incy, LAPACK_DOUBLEREAL *c__, LAPACK_INTEGER *incc);

  int zlarnv_(LAPACK_INTEGER *idist, LAPACK_INTEGER *iseed, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *x);

  int zlarrv_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *l, 
              LAPACK_INTEGER *isplit, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_INTEGER *iblock, 
              LAPACK_DOUBLEREAL *gersch, LAPACK_DOUBLEREAL *tol, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz,
              LAPACK_INTEGER *isuppz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int zlartg_(LAPACK_DOUBLECOMPLEX *f, LAPACK_DOUBLECOMPLEX *g, LAPACK_DOUBLEREAL *
              cs, LAPACK_DOUBLECOMPLEX *sn, LAPACK_DOUBLECOMPLEX *r__);

  int zlartv_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLECOMPLEX *y, LAPACK_INTEGER *incy, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLECOMPLEX *s, 
              LAPACK_INTEGER *incc);

  int zlarz_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *l, 
             LAPACK_DOUBLECOMPLEX *v, LAPACK_INTEGER *incv, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
             c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work);

  int zlarzb_(char *side, char *trans, char *direct, char *
              storev, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLECOMPLEX 
              *v, LAPACK_INTEGER *ldv, LAPACK_DOUBLECOMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLECOMPLEX *c__, 
              LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *ldwork);

  int zlarzt_(char *direct, char *storev, LAPACK_INTEGER *n, LAPACK_INTEGER *
              k, LAPACK_DOUBLECOMPLEX *v, LAPACK_INTEGER *ldv, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              t, LAPACK_INTEGER *ldt);

  int zlascl_(char *type__, LAPACK_INTEGER *kl, LAPACK_INTEGER *ku, 
              LAPACK_DOUBLEREAL *cfrom, LAPACK_DOUBLEREAL *cto, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int zlaset_(char *uplo, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *beta, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *
              lda);

  int zlasr_(char *side, char *pivot, char *direct, LAPACK_INTEGER *m,
             LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLECOMPLEX *a, 
             LAPACK_INTEGER *lda);

  int zlassq_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx, 
              LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *sumsq);

  int zlaswp_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_INTEGER *k1, LAPACK_INTEGER *k2, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *incx);

  int zlasyf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, LAPACK_INTEGER *kb,
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *w, 
              LAPACK_INTEGER *ldw, LAPACK_INTEGER *info);

  int zlatbs_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, 
              LAPACK_DOUBLECOMPLEX *x, LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *cnorm, LAPACK_INTEGER *info);

  int zlatdf_(LAPACK_INTEGER *ijob, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *z__, 
              LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *rhs, LAPACK_DOUBLEREAL *rdsum, LAPACK_DOUBLEREAL *
              rdscal, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *jpiv);

  int zlatps_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *x, LAPACK_DOUBLEREAL *
              scale, LAPACK_DOUBLEREAL *cnorm, LAPACK_INTEGER *info);

  int zlatrd_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nb, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *w, LAPACK_INTEGER *ldw);

  int zlatrs_(char *uplo, char *trans, char *diag, char *
              normin, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *x, 
              LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *cnorm, LAPACK_INTEGER *info);

  int zlatrz_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *l, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work);

  int zlatzm_(char *side, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *v, LAPACK_INTEGER *incv, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              c1, LAPACK_DOUBLECOMPLEX *c2, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work);

  int zlauu2_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int zlauum_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int zpbcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *
              rcond, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zpbequ_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, 
              LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *info);

  int zpbrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLECOMPLEX *afb, LAPACK_INTEGER *
              ldafb, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx,
              LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *
              rwork, LAPACK_INTEGER *info);

  int zpbstf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int zpbsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
             nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *
             ldb, LAPACK_INTEGER *info);

  int zpbsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLECOMPLEX *afb, 
              LAPACK_INTEGER *ldafb, char *equed, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER 
              *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *
              ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, 
              LAPACK_INTEGER *info);

  int zpbtf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int zpbtrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, 
              LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_INTEGER *info);

  int zpbtrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *kd, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *
              ldb, LAPACK_INTEGER *info);

  int zpocon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zpoequ_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *info);

  int zporfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *af, LAPACK_INTEGER *ldaf, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *
              rwork, LAPACK_INTEGER *info);

  int zposv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
             LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
             LAPACK_INTEGER *info);

  int zposvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *af, LAPACK_INTEGER *
              ldaf, char *equed, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int zpotf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int zpotrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int zpotri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int zpotrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int zppcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL 
              *rwork, LAPACK_INTEGER *info);

  int zppequ_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *scond, LAPACK_DOUBLEREAL *amax, LAPACK_INTEGER *info);

  int zpprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *afp, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb,
              LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zppsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
             LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int zppsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *afp, char *equed, LAPACK_DOUBLEREAL *
              s, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zpptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_INTEGER *info);

  int zpptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_INTEGER *info);

  int zpptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int zptcon_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLECOMPLEX *e, 
              LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int zptrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLECOMPLEX *e, LAPACK_DOUBLEREAL *df, LAPACK_DOUBLECOMPLEX *ef, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *
              rwork, LAPACK_INTEGER *info);

  int zptsv_(LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, LAPACK_DOUBLEREAL *d__, 
             LAPACK_DOUBLECOMPLEX *e, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int zptsvx_(char *fact, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLECOMPLEX *e, LAPACK_DOUBLEREAL *df, LAPACK_DOUBLECOMPLEX *ef, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zpttrf_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLECOMPLEX *e, 
              LAPACK_INTEGER *info);

  int zpttrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLECOMPLEX *e, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int zptts2_(LAPACK_INTEGER *iuplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLECOMPLEX *e, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb);

  int zrot_(LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *cx, LAPACK_INTEGER *incx, 
            LAPACK_DOUBLECOMPLEX *cy, LAPACK_INTEGER *incy, LAPACK_DOUBLEREAL *c__, LAPACK_DOUBLECOMPLEX *s);

  int zspcon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *info);

  int zspmv_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *alpha, 
             LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx, LAPACK_DOUBLECOMPLEX *
             beta, LAPACK_DOUBLECOMPLEX *y, LAPACK_INTEGER *incy);

  int zspr_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *alpha, 
            LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx, LAPACK_DOUBLECOMPLEX *ap);

  int zsprfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *afp, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *
              b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int zspsv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
             LAPACK_DOUBLECOMPLEX *ap, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
             LAPACK_INTEGER *info);

  int zspsvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *afp, LAPACK_INTEGER *ipiv, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zsptrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int zsptri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zsptrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int zstedc_(char *compz, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *lrwork, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *liwork, LAPACK_INTEGER *info);

  int zstein_(LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, LAPACK_DOUBLEREAL *e, 
              LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *w, LAPACK_INTEGER *iblock, LAPACK_INTEGER *isplit, 
              LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, LAPACK_INTEGER *iwork, 
              LAPACK_INTEGER *ifail, LAPACK_INTEGER *info);

  int zsteqr_(char *compz, LAPACK_INTEGER *n, LAPACK_DOUBLEREAL *d__, 
              LAPACK_DOUBLEREAL *e, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, LAPACK_DOUBLEREAL *work, 
              LAPACK_INTEGER *info);

  int zsycon_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLEREAL *anorm, LAPACK_DOUBLEREAL *rcond, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zsymv_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *alpha, 
             LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx, 
             LAPACK_DOUBLECOMPLEX *beta, LAPACK_DOUBLECOMPLEX *y, LAPACK_INTEGER *incy);

  int zsyr_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *alpha, 
            LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *incx, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda);

  int zsyrfs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *af, LAPACK_INTEGER *ldaf, 
              LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, 
              LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work,
              LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zsysv_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
             LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, 
             LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zsysvx_(char *fact, char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *
              nrhs, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *af, LAPACK_INTEGER *
              ldaf, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x,
              LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int zsytf2_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_INTEGER *info);

  int zsytrf_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, 
              LAPACK_INTEGER *info);

  int zsytri_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zsytrs_(char *uplo, LAPACK_INTEGER *n, LAPACK_INTEGER *nrhs, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *ipiv, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int ztbcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, LAPACK_DOUBLEREAL *rcond, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int ztbrfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, 
              LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *
              rwork, LAPACK_INTEGER *info);

  int ztbtrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *kd, LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *ab, LAPACK_INTEGER *ldab, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int ztgevc_(char *side, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER 
              *ldb, LAPACK_DOUBLECOMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *
              ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork,
              LAPACK_INTEGER *info);

  int ztgex2_(LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_INTEGER *j1, LAPACK_INTEGER *info);

  int ztgexc_(LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *ldz, 
              LAPACK_INTEGER *ifst, LAPACK_INTEGER *ilst, LAPACK_INTEGER *info);

  int ztgsen_(LAPACK_INTEGER *ijob, LAPACK_LOGICAL *wantq, LAPACK_LOGICAL *wantz, 
              LAPACK_LOGICAL *select, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *alpha, LAPACK_DOUBLECOMPLEX *
              beta, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *z__, LAPACK_INTEGER *
              ldz, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *pl, LAPACK_DOUBLEREAL *pr, LAPACK_DOUBLEREAL *dif, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *liwork, 
              LAPACK_INTEGER *info);

  int ztgsja_(char *jobu, char *jobv, char *jobq, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *p, LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, LAPACK_DOUBLEREAL *tola, 
              LAPACK_DOUBLEREAL *tolb, LAPACK_DOUBLEREAL *alpha, LAPACK_DOUBLEREAL *beta, LAPACK_DOUBLECOMPLEX *
              u, LAPACK_INTEGER *ldu, LAPACK_DOUBLECOMPLEX *v, LAPACK_INTEGER *ldv, LAPACK_DOUBLECOMPLEX *q, 
              LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *ncycle, LAPACK_INTEGER *info);

  int ztgsna_(char *job, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER 
              *ldb, LAPACK_DOUBLECOMPLEX *vl, LAPACK_INTEGER *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *
              ldvr, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *dif, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int ztgsy2_(char *trans, LAPACK_INTEGER *ijob, LAPACK_INTEGER *m, LAPACK_INTEGER *
              n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *d__, LAPACK_INTEGER *ldd, 
              LAPACK_DOUBLECOMPLEX *e, LAPACK_INTEGER *lde, LAPACK_DOUBLECOMPLEX *f, LAPACK_INTEGER *ldf, 
              LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *rdsum, LAPACK_DOUBLEREAL *rdscal, LAPACK_INTEGER *
              info);

  int ztgsyl_(char *trans, LAPACK_INTEGER *ijob, LAPACK_INTEGER *m, LAPACK_INTEGER *
              n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *d__, LAPACK_INTEGER *ldd, 
              LAPACK_DOUBLECOMPLEX *e, LAPACK_INTEGER *lde, LAPACK_DOUBLECOMPLEX *f, LAPACK_INTEGER *ldf, 
              LAPACK_DOUBLEREAL *scale, LAPACK_DOUBLEREAL *dif, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *iwork, LAPACK_INTEGER *info);

  int ztpcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL 
              *rwork, LAPACK_INTEGER *info);

  int ztprfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, LAPACK_DOUBLEREAL *berr, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int ztptri_(char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *ap, LAPACK_INTEGER *info);

  int ztptrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *b, LAPACK_INTEGER *ldb, 
              LAPACK_INTEGER *info);

  int ztrcon_(char *norm, char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLEREAL *rcond, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int ztrevc_(char *side, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLECOMPLEX *vl, 
              LAPACK_INTEGER *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_INTEGER *mm, LAPACK_INTEGER 
              *m, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int ztrexc_(char *compq, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *t, 
              LAPACK_INTEGER *ldt, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_INTEGER *ifst, LAPACK_INTEGER *
              ilst, LAPACK_INTEGER *info);

  int ztrrfs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *x, LAPACK_INTEGER *ldx, LAPACK_DOUBLEREAL *ferr, 
              LAPACK_DOUBLEREAL *berr, LAPACK_DOUBLECOMPLEX *work, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *
              info);

  int ztrsen_(char *job, char *compq, LAPACK_LOGICAL *select, LAPACK_INTEGER 
              *n, LAPACK_DOUBLECOMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, 
              LAPACK_DOUBLECOMPLEX *w, LAPACK_INTEGER *m, LAPACK_DOUBLEREAL *s, LAPACK_DOUBLEREAL *sep, 
              LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int ztrsna_(char *job, char *howmny, LAPACK_LOGICAL *select, 
              LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *t, LAPACK_INTEGER *ldt, LAPACK_DOUBLECOMPLEX *vl, 
              LAPACK_INTEGER *ldvl, LAPACK_DOUBLECOMPLEX *vr, LAPACK_INTEGER *ldvr, LAPACK_DOUBLEREAL *s, 
              LAPACK_DOUBLEREAL *sep, LAPACK_INTEGER *mm, LAPACK_INTEGER *m, LAPACK_DOUBLECOMPLEX *work, 
              LAPACK_INTEGER *ldwork, LAPACK_DOUBLEREAL *rwork, LAPACK_INTEGER *info);

  int ztrsyl_(char *trana, char *tranb, LAPACK_INTEGER *isgn, LAPACK_INTEGER 
              *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLEREAL *scale, 
              LAPACK_INTEGER *info);

  int ztrti2_(char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int ztrtri_(char *uplo, char *diag, LAPACK_INTEGER *n, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_INTEGER *info);

  int ztrtrs_(char *uplo, char *trans, char *diag, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *nrhs, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *b, 
              LAPACK_INTEGER *ldb, LAPACK_INTEGER *info);

  int ztzrqf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_INTEGER *info);

  int ztzrzf_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zung2l_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *info);

  int zung2r_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *info);

  int zungbr_(char *vect, LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zunghr_(LAPACK_INTEGER *n, LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zungl2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *info);

  int zunglq_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zungql_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zungqr_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zungr2_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *info);

  int zungrq_(LAPACK_INTEGER *m, LAPACK_INTEGER *n, LAPACK_INTEGER *k, 
              LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zungtr_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, 
              LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zunm2l_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zunm2r_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zunmbr_(char *vect, char *side, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX 
              *tau, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *info);

  int zunmhr_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *ilo, LAPACK_INTEGER *ihi, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, 
              LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *lwork, LAPACK_INTEGER *info);

  int zunml2_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zunmlq_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zunmql_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zunmqr_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zunmr2_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

  int zunmr3_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX 
              *tau, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *
              info);

  int zunmrq_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zunmrz_(char *side, char *trans, LAPACK_INTEGER *m, LAPACK_INTEGER *n, 
              LAPACK_INTEGER *k, LAPACK_INTEGER *l, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX 
              *tau, LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *
              lwork, LAPACK_INTEGER *info);

  int zunmtr_(char *side, char *uplo, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *a, LAPACK_INTEGER *lda, LAPACK_DOUBLECOMPLEX *tau, 
              LAPACK_DOUBLECOMPLEX *c__, LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *lwork,
              LAPACK_INTEGER *info);

  int zupgtr_(char *uplo, LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, 
              LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *q, LAPACK_INTEGER *ldq, LAPACK_DOUBLECOMPLEX *
              work, LAPACK_INTEGER *info);

  int zupmtr_(char *side, char *uplo, char *trans, LAPACK_INTEGER *m, 
              LAPACK_INTEGER *n, LAPACK_DOUBLECOMPLEX *ap, LAPACK_DOUBLECOMPLEX *tau, LAPACK_DOUBLECOMPLEX *c__,
              LAPACK_INTEGER *ldc, LAPACK_DOUBLECOMPLEX *work, LAPACK_INTEGER *info);

}  // extern "C"
