#ifndef MyString_H
#define MyString_H

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "diplomat_runtime.h"

#include "Float64Vec.d.h"

#include "MyString.d.h"






MyString* MyString_new(DiplomatStringView v);

MyString* MyString_new_unsafe(DiplomatStringView v);

MyString* MyString_new_from_first(DiplomatStringsView v);

MyString* MyString_new_from_utf16(DiplomatStrings16View v);

void MyString_set_str(MyString* self, DiplomatStringView new_str);

void MyString_get_str(const MyString* self, DiplomatWrite* write);

void MyString_get_str16(const MyString* self, DiplomatWrite16* write);

typedef struct MyString_get_str16_nonempty_result { bool is_ok;} MyString_get_str16_nonempty_result;
MyString_get_str16_nonempty_result MyString_get_str16_nonempty(const MyString* self, DiplomatWrite16* write);

DiplomatStringView MyString_get_static_str(void);

void MyString_string_transform(DiplomatStringView foo, DiplomatWrite* write);

DiplomatStringView MyString_borrow(const MyString* self);

void MyString_slice_of_opaques(DiplomatMyStringView sl, DiplomatWrite* write);

void MyString_optional_slice_of_opaques(DiplomatMyStringView sl, DiplomatWrite* write);

void MyString_other_opaque_type(DiplomatFloat64VecView other, DiplomatWrite* write);

void MyString_destroy(MyString* self);





#endif // MyString_H
