#ifndef OCAML_INT56_H
#define OCAML_INT56_H

#define Int56_val(v) ((*((int64_t *)Data_custom_val(v))) >> 8)

#define copy_int56(v) copy_int32(v)

#endif