#include "../../baik.h"

struct my_struct {
  int a;
  const char *b;
  double c;
//   struct mg_str d;
//   struct mg_str *e;
  float f;
  bool g;
};

static const struct baik_c_struct_member my_struct_descr[] = {
  {"a", offsetof(struct my_struct, a), BAIK_STRUCT_FIELD_TYPE_INT, NULL},
  {"b", offsetof(struct my_struct, b), BAIK_STRUCT_FIELD_TYPE_CHAR_PTR, NULL},
  {"c", offsetof(struct my_struct, c), BAIK_STRUCT_FIELD_TYPE_DOUBLE, NULL},
//   {"d", offsetof(struct my_struct, d), BAIK_STRUCT_FIELD_TYPE_MG_STR, NULL},
//   {"e", offsetof(struct my_struct, e), BAIK_STRUCT_FIELD_TYPE_MG_STR_PTR, NULL},
  {"f", offsetof(struct my_struct, f), BAIK_STRUCT_FIELD_TYPE_FLOAT, NULL},
  {"g", offsetof(struct my_struct, g), BAIK_STRUCT_FIELD_TYPE_BOOL, NULL},
  {NULL, 0, BAIK_STRUCT_FIELD_TYPE_INVALID, NULL},
};

const struct baik_c_struct_member *get_my_struct_descr(void) {
  return my_struct_descr;
};

int main(){
    return 0;
}