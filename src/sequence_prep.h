#ifndef SEQUENCE_PREP_H
#define SEQUENCE_PREP_H

#ifdef SEQUENCE_PREP_IMPORT
#define EXTERN
#else
#define EXTERN extern
#endif

struct seq_buffer;
struct rng_state;

EXTERN int prep_sequences(struct tl_seq_buffer* sb, struct rng_state* rng, int num_models,int num_states, double sigma);


EXTERN int get_res_counts(struct seq_buffer* sb, double* counts);
#undef SEQUENCE_PREP_IMPORT
#undef EXTERN

#endif
