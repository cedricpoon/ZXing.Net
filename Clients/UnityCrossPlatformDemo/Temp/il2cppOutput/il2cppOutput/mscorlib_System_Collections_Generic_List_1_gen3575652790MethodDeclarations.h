#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t3575652790;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t1355880881;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t4261800269;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3244525207;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t1183433934;
// System.Comparison`1<System.Byte>
struct Comparison_1_t1187401401;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1661435782.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C"  void List_1__ctor_m2211032477_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1__ctor_m2211032477(__this, method) ((  void (*) (List_1_t3575652790 *, const MethodInfo*))List_1__ctor_m2211032477_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m1896791746_gshared (List_1_t3575652790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1896791746(__this, ___collection, method) ((  void (*) (List_1_t3575652790 *, Object_t*, const MethodInfo*))List_1__ctor_m1896791746_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m400272279_gshared (List_1_t3575652790 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m400272279(__this, ___capacity, method) ((  void (*) (List_1_t3575652790 *, int32_t, const MethodInfo*))List_1__ctor_m400272279_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C"  void List_1__ctor_m2428304632_gshared (List_1_t3575652790 * __this, ByteU5BU5D_t58506160* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m2428304632(__this, ___data, ___size, method) ((  void (*) (List_1_t3575652790 *, ByteU5BU5D_t58506160*, int32_t, const MethodInfo*))List_1__ctor_m2428304632_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C"  void List_1__cctor_m3635401136_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m3635401136(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m3635401136_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m529125039_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m529125039(__this, method) ((  Object_t* (*) (List_1_t3575652790 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m529125039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m1974156871_gshared (List_1_t3575652790 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1974156871(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t3575652790 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1974156871_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m3741095042_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m3741095042(__this, method) ((  Object_t * (*) (List_1_t3575652790 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3741095042_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m2925214255_gshared (List_1_t3575652790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m2925214255(__this, ___item, method) ((  int32_t (*) (List_1_t3575652790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m2925214255_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m1718187133_gshared (List_1_t3575652790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1718187133(__this, ___item, method) ((  bool (*) (List_1_t3575652790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1718187133_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m3959734535_gshared (List_1_t3575652790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m3959734535(__this, ___item, method) ((  int32_t (*) (List_1_t3575652790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3959734535_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m305247666_gshared (List_1_t3575652790 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m305247666(__this, ___index, ___item, method) ((  void (*) (List_1_t3575652790 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m305247666_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m4132608566_gshared (List_1_t3575652790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m4132608566(__this, ___item, method) ((  void (*) (List_1_t3575652790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m4132608566_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m729787454_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m729787454(__this, method) ((  bool (*) (List_1_t3575652790 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m729787454_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3357691435_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3357691435(__this, method) ((  Object_t * (*) (List_1_t3575652790 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3357691435_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m2286641394_gshared (List_1_t3575652790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m2286641394(__this, ___index, method) ((  Object_t * (*) (List_1_t3575652790 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2286641394_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m1899183369_gshared (List_1_t3575652790 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1899183369(__this, ___index, ___value, method) ((  void (*) (List_1_t3575652790 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1899183369_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C"  void List_1_Add_m1724033858_gshared (List_1_t3575652790 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m1724033858(__this, ___item, method) ((  void (*) (List_1_t3575652790 *, uint8_t, const MethodInfo*))List_1_Add_m1724033858_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m2296489085_gshared (List_1_t3575652790 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m2296489085(__this, ___newCount, method) ((  void (*) (List_1_t3575652790 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m2296489085_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m815251274_gshared (List_1_t3575652790 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m815251274(__this, ___idx, ___count, method) ((  void (*) (List_1_t3575652790 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m815251274_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m2560149371_gshared (List_1_t3575652790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m2560149371(__this, ___collection, method) ((  void (*) (List_1_t3575652790 *, Object_t*, const MethodInfo*))List_1_AddCollection_m2560149371_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m1821121595_gshared (List_1_t3575652790 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1821121595(__this, ___enumerable, method) ((  void (*) (List_1_t3575652790 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1821121595_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m2489112956_gshared (List_1_t3575652790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2489112956(__this, ___collection, method) ((  void (*) (List_1_t3575652790 *, Object_t*, const MethodInfo*))List_1_AddRange_m2489112956_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C"  void List_1_Clear_m3912133064_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_Clear_m3912133064(__this, method) ((  void (*) (List_1_t3575652790 *, const MethodInfo*))List_1_Clear_m3912133064_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C"  bool List_1_Contains_m2169305718_gshared (List_1_t3575652790 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m2169305718(__this, ___item, method) ((  bool (*) (List_1_t3575652790 *, uint8_t, const MethodInfo*))List_1_Contains_m2169305718_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m2627798706_gshared (List_1_t3575652790 * __this, ByteU5BU5D_t58506160* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m2627798706(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t3575652790 *, ByteU5BU5D_t58506160*, int32_t, const MethodInfo*))List_1_CopyTo_m2627798706_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C"  Enumerator_t1661435782  List_1_GetEnumerator_m2698757299_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2698757299(__this, method) ((  Enumerator_t1661435782  (*) (List_1_t3575652790 *, const MethodInfo*))List_1_GetEnumerator_m2698757299_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C"  List_1_t3575652790 * List_1_GetRange_m1077931797_gshared (List_1_t3575652790 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m1077931797(__this, ___index, ___count, method) ((  List_1_t3575652790 * (*) (List_1_t3575652790 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m1077931797_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m2214865590_gshared (List_1_t3575652790 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m2214865590(__this, ___item, method) ((  int32_t (*) (List_1_t3575652790 *, uint8_t, const MethodInfo*))List_1_IndexOf_m2214865590_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m2317880073_gshared (List_1_t3575652790 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m2317880073(__this, ___start, ___delta, method) ((  void (*) (List_1_t3575652790 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m2317880073_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m2374165890_gshared (List_1_t3575652790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m2374165890(__this, ___index, method) ((  void (*) (List_1_t3575652790 *, int32_t, const MethodInfo*))List_1_CheckIndex_m2374165890_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m601170345_gshared (List_1_t3575652790 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m601170345(__this, ___index, ___item, method) ((  void (*) (List_1_t3575652790 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m601170345_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m4108920670_gshared (List_1_t3575652790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m4108920670(__this, ___collection, method) ((  void (*) (List_1_t3575652790 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m4108920670_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C"  bool List_1_Remove_m189390833_gshared (List_1_t3575652790 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m189390833(__this, ___item, method) ((  bool (*) (List_1_t3575652790 *, uint8_t, const MethodInfo*))List_1_Remove_m189390833_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2769990511_gshared (List_1_t3575652790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m2769990511(__this, ___index, method) ((  void (*) (List_1_t3575652790 *, int32_t, const MethodInfo*))List_1_RemoveAt_m2769990511_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C"  void List_1_Reverse_m3126177437_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_Reverse_m3126177437(__this, method) ((  void (*) (List_1_t3575652790 *, const MethodInfo*))List_1_Reverse_m3126177437_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C"  void List_1_Sort_m3559609695_gshared (List_1_t3575652790 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m3559609695(__this, ___comparer, method) ((  void (*) (List_1_t3575652790 *, Object_t*, const MethodInfo*))List_1_Sort_m3559609695_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m1645416632_gshared (List_1_t3575652790 * __this, Comparison_1_t1187401401 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1645416632(__this, ___comparison, method) ((  void (*) (List_1_t3575652790 *, Comparison_1_t1187401401 *, const MethodInfo*))List_1_Sort_m1645416632_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C"  ByteU5BU5D_t58506160* List_1_ToArray_m2749727836_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_ToArray_m2749727836(__this, method) ((  ByteU5BU5D_t58506160* (*) (List_1_t3575652790 *, const MethodInfo*))List_1_ToArray_m2749727836_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m470013926_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m470013926(__this, method) ((  int32_t (*) (List_1_t3575652790 *, const MethodInfo*))List_1_get_Capacity_m470013926_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m3801645199_gshared (List_1_t3575652790 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m3801645199(__this, ___value, method) ((  void (*) (List_1_t3575652790 *, int32_t, const MethodInfo*))List_1_set_Capacity_m3801645199_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C"  int32_t List_1_get_Count_m4053631365_gshared (List_1_t3575652790 * __this, const MethodInfo* method);
#define List_1_get_Count_m4053631365(__this, method) ((  int32_t (*) (List_1_t3575652790 *, const MethodInfo*))List_1_get_Count_m4053631365_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C"  uint8_t List_1_get_Item_m413458611_gshared (List_1_t3575652790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m413458611(__this, ___index, method) ((  uint8_t (*) (List_1_t3575652790 *, int32_t, const MethodInfo*))List_1_get_Item_m413458611_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m4008680512_gshared (List_1_t3575652790 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m4008680512(__this, ___index, ___value, method) ((  void (*) (List_1_t3575652790 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m4008680512_gshared)(__this, ___index, ___value, method)
