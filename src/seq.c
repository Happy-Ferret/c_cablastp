#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "seq.h"

struct cbp_seq *
cbp_seq_init(int32_t id, char *name, char *residues)
{
    return cbp_seq_init_range(id, name, residues, 0, strlen(residues));
}

struct cbp_seq *
cbp_seq_init_range(int32_t id, char *name, char *residues,
                   int32_t start, int32_t end)
{
    struct cbp_seq *seq;
    int len;

    seq = malloc(sizeof(*seq));
    assert(seq);

    seq->id = id;
    seq->length = end - start;
    seq->name = NULL;
    seq->residues = NULL;

    assert(seq->length > 0);

    len = strlen(name);
    if (len > 0) {
        seq->name = malloc((1 + len) * sizeof(*seq->name));
        assert(seq->name);
        strcpy(seq->name, name);
    }
    if (seq->length > 0) {
        assert(start >= 0 && start < end);

        seq->residues = malloc((1 + seq->length) * sizeof(*seq->residues));
        assert(seq->residues);
        strncpy(seq->residues, residues + start, seq->length);
        seq->residues[seq->length] = '\0';
        assert(strlen(seq->residues) > 0);
    }

    assert(seq->residues != NULL);

    return seq;
}

void
cbp_seq_free(struct cbp_seq *seq)
{
    free(seq->name);
    free(seq->residues);
    free(seq);
}
