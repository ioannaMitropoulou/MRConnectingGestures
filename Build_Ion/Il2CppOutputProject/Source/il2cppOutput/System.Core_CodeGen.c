#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000029 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002B System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002D System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000031 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000032 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000033 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004B System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004E System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000050 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000054 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000056 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005C TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005E System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000060 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000061 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000063 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000065 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006E TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000074 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000075 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000078 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000081 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000087 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000088 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000089 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000008A System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x0000008B System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000008C System.Void System.Linq.Set`1::Resize()
// 0x0000008D System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000008E System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000008F System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000090 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000092 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000093 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000094 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000095 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000096 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000097 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000098 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000099 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009A System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009B System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000009C System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000009D System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000009E System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000009F System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A0 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A1 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000A2 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000A3 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000A4 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000AA System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000AC System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000AD System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000AE System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000AF System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B0 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B1 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000B4 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000BB System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000BC System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000C0 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000C1 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[194] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[194] = 
{
	6909,
	6909,
	7144,
	7144,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6804,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[65] = 
{
	{ 0x02000004, { 99, 4 } },
	{ 0x02000005, { 103, 9 } },
	{ 0x02000006, { 114, 7 } },
	{ 0x02000007, { 123, 10 } },
	{ 0x02000008, { 135, 11 } },
	{ 0x02000009, { 149, 9 } },
	{ 0x0200000A, { 161, 12 } },
	{ 0x0200000B, { 176, 1 } },
	{ 0x0200000C, { 177, 2 } },
	{ 0x0200000D, { 179, 12 } },
	{ 0x0200000E, { 191, 8 } },
	{ 0x0200000F, { 199, 11 } },
	{ 0x02000010, { 210, 12 } },
	{ 0x02000011, { 222, 12 } },
	{ 0x02000012, { 234, 2 } },
	{ 0x02000014, { 236, 8 } },
	{ 0x02000016, { 244, 3 } },
	{ 0x02000017, { 249, 5 } },
	{ 0x02000018, { 254, 7 } },
	{ 0x02000019, { 261, 3 } },
	{ 0x0200001A, { 264, 7 } },
	{ 0x0200001B, { 271, 4 } },
	{ 0x0200001C, { 275, 23 } },
	{ 0x0200001E, { 298, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 4 } },
	{ 0x06000019, { 59, 4 } },
	{ 0x0600001A, { 63, 3 } },
	{ 0x0600001B, { 66, 4 } },
	{ 0x0600001C, { 70, 3 } },
	{ 0x0600001D, { 73, 3 } },
	{ 0x0600001E, { 76, 1 } },
	{ 0x0600001F, { 77, 1 } },
	{ 0x06000020, { 78, 3 } },
	{ 0x06000021, { 81, 3 } },
	{ 0x06000022, { 84, 2 } },
	{ 0x06000023, { 86, 3 } },
	{ 0x06000024, { 89, 2 } },
	{ 0x06000025, { 91, 5 } },
	{ 0x06000026, { 96, 3 } },
	{ 0x06000037, { 112, 2 } },
	{ 0x0600003C, { 121, 2 } },
	{ 0x06000041, { 133, 2 } },
	{ 0x06000047, { 146, 3 } },
	{ 0x0600004C, { 158, 3 } },
	{ 0x06000051, { 173, 3 } },
	{ 0x06000091, { 247, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[300] = 
{
	{ (Il2CppRGCTXDataType)2, 7071 },
	{ (Il2CppRGCTXDataType)3, 26874 },
	{ (Il2CppRGCTXDataType)2, 11253 },
	{ (Il2CppRGCTXDataType)2, 10475 },
	{ (Il2CppRGCTXDataType)3, 46897 },
	{ (Il2CppRGCTXDataType)2, 7779 },
	{ (Il2CppRGCTXDataType)2, 10505 },
	{ (Il2CppRGCTXDataType)3, 46941 },
	{ (Il2CppRGCTXDataType)2, 10487 },
	{ (Il2CppRGCTXDataType)3, 46913 },
	{ (Il2CppRGCTXDataType)2, 7072 },
	{ (Il2CppRGCTXDataType)3, 26875 },
	{ (Il2CppRGCTXDataType)2, 11285 },
	{ (Il2CppRGCTXDataType)2, 10517 },
	{ (Il2CppRGCTXDataType)3, 46957 },
	{ (Il2CppRGCTXDataType)2, 7806 },
	{ (Il2CppRGCTXDataType)2, 10547 },
	{ (Il2CppRGCTXDataType)3, 47099 },
	{ (Il2CppRGCTXDataType)2, 10532 },
	{ (Il2CppRGCTXDataType)3, 47022 },
	{ (Il2CppRGCTXDataType)2, 1277 },
	{ (Il2CppRGCTXDataType)3, 193 },
	{ (Il2CppRGCTXDataType)3, 194 },
	{ (Il2CppRGCTXDataType)2, 4068 },
	{ (Il2CppRGCTXDataType)3, 16847 },
	{ (Il2CppRGCTXDataType)2, 1278 },
	{ (Il2CppRGCTXDataType)3, 203 },
	{ (Il2CppRGCTXDataType)3, 204 },
	{ (Il2CppRGCTXDataType)2, 4085 },
	{ (Il2CppRGCTXDataType)3, 16856 },
	{ (Il2CppRGCTXDataType)3, 52377 },
	{ (Il2CppRGCTXDataType)2, 1316 },
	{ (Il2CppRGCTXDataType)3, 366 },
	{ (Il2CppRGCTXDataType)3, 52383 },
	{ (Il2CppRGCTXDataType)2, 1324 },
	{ (Il2CppRGCTXDataType)3, 402 },
	{ (Il2CppRGCTXDataType)2, 8520 },
	{ (Il2CppRGCTXDataType)3, 36935 },
	{ (Il2CppRGCTXDataType)2, 8521 },
	{ (Il2CppRGCTXDataType)3, 36936 },
	{ (Il2CppRGCTXDataType)3, 22139 },
	{ (Il2CppRGCTXDataType)3, 52313 },
	{ (Il2CppRGCTXDataType)2, 1281 },
	{ (Il2CppRGCTXDataType)3, 246 },
	{ (Il2CppRGCTXDataType)3, 52420 },
	{ (Il2CppRGCTXDataType)2, 1327 },
	{ (Il2CppRGCTXDataType)3, 425 },
	{ (Il2CppRGCTXDataType)3, 52334 },
	{ (Il2CppRGCTXDataType)2, 1308 },
	{ (Il2CppRGCTXDataType)3, 338 },
	{ (Il2CppRGCTXDataType)2, 1662 },
	{ (Il2CppRGCTXDataType)3, 3163 },
	{ (Il2CppRGCTXDataType)3, 3164 },
	{ (Il2CppRGCTXDataType)2, 7780 },
	{ (Il2CppRGCTXDataType)3, 29023 },
	{ (Il2CppRGCTXDataType)2, 6154 },
	{ (Il2CppRGCTXDataType)2, 4375 },
	{ (Il2CppRGCTXDataType)2, 4628 },
	{ (Il2CppRGCTXDataType)2, 4958 },
	{ (Il2CppRGCTXDataType)2, 6155 },
	{ (Il2CppRGCTXDataType)2, 4376 },
	{ (Il2CppRGCTXDataType)2, 4629 },
	{ (Il2CppRGCTXDataType)2, 4959 },
	{ (Il2CppRGCTXDataType)2, 4630 },
	{ (Il2CppRGCTXDataType)2, 4960 },
	{ (Il2CppRGCTXDataType)3, 16849 },
	{ (Il2CppRGCTXDataType)2, 6156 },
	{ (Il2CppRGCTXDataType)2, 4377 },
	{ (Il2CppRGCTXDataType)2, 4631 },
	{ (Il2CppRGCTXDataType)2, 4961 },
	{ (Il2CppRGCTXDataType)2, 4632 },
	{ (Il2CppRGCTXDataType)2, 4962 },
	{ (Il2CppRGCTXDataType)3, 16850 },
	{ (Il2CppRGCTXDataType)2, 6153 },
	{ (Il2CppRGCTXDataType)2, 4627 },
	{ (Il2CppRGCTXDataType)2, 4957 },
	{ (Il2CppRGCTXDataType)2, 2835 },
	{ (Il2CppRGCTXDataType)2, 4610 },
	{ (Il2CppRGCTXDataType)2, 4611 },
	{ (Il2CppRGCTXDataType)2, 4954 },
	{ (Il2CppRGCTXDataType)3, 16846 },
	{ (Il2CppRGCTXDataType)2, 4609 },
	{ (Il2CppRGCTXDataType)2, 4953 },
	{ (Il2CppRGCTXDataType)3, 16845 },
	{ (Il2CppRGCTXDataType)2, 4374 },
	{ (Il2CppRGCTXDataType)2, 4625 },
	{ (Il2CppRGCTXDataType)2, 4626 },
	{ (Il2CppRGCTXDataType)2, 4956 },
	{ (Il2CppRGCTXDataType)3, 16848 },
	{ (Il2CppRGCTXDataType)2, 4373 },
	{ (Il2CppRGCTXDataType)3, 52286 },
	{ (Il2CppRGCTXDataType)3, 15444 },
	{ (Il2CppRGCTXDataType)2, 3841 },
	{ (Il2CppRGCTXDataType)2, 4613 },
	{ (Il2CppRGCTXDataType)2, 4955 },
	{ (Il2CppRGCTXDataType)2, 5204 },
	{ (Il2CppRGCTXDataType)2, 4658 },
	{ (Il2CppRGCTXDataType)2, 4968 },
	{ (Il2CppRGCTXDataType)3, 17085 },
	{ (Il2CppRGCTXDataType)3, 26876 },
	{ (Il2CppRGCTXDataType)3, 26878 },
	{ (Il2CppRGCTXDataType)2, 921 },
	{ (Il2CppRGCTXDataType)3, 26877 },
	{ (Il2CppRGCTXDataType)3, 26886 },
	{ (Il2CppRGCTXDataType)2, 7075 },
	{ (Il2CppRGCTXDataType)2, 10488 },
	{ (Il2CppRGCTXDataType)3, 46914 },
	{ (Il2CppRGCTXDataType)3, 26887 },
	{ (Il2CppRGCTXDataType)2, 4720 },
	{ (Il2CppRGCTXDataType)2, 5015 },
	{ (Il2CppRGCTXDataType)3, 16864 },
	{ (Il2CppRGCTXDataType)3, 52251 },
	{ (Il2CppRGCTXDataType)2, 10533 },
	{ (Il2CppRGCTXDataType)3, 47023 },
	{ (Il2CppRGCTXDataType)3, 26879 },
	{ (Il2CppRGCTXDataType)2, 7074 },
	{ (Il2CppRGCTXDataType)2, 10476 },
	{ (Il2CppRGCTXDataType)3, 46898 },
	{ (Il2CppRGCTXDataType)3, 16863 },
	{ (Il2CppRGCTXDataType)3, 26880 },
	{ (Il2CppRGCTXDataType)3, 52250 },
	{ (Il2CppRGCTXDataType)2, 10518 },
	{ (Il2CppRGCTXDataType)3, 46958 },
	{ (Il2CppRGCTXDataType)3, 26893 },
	{ (Il2CppRGCTXDataType)2, 7076 },
	{ (Il2CppRGCTXDataType)2, 10506 },
	{ (Il2CppRGCTXDataType)3, 46942 },
	{ (Il2CppRGCTXDataType)3, 29093 },
	{ (Il2CppRGCTXDataType)3, 13361 },
	{ (Il2CppRGCTXDataType)3, 16865 },
	{ (Il2CppRGCTXDataType)3, 13360 },
	{ (Il2CppRGCTXDataType)3, 26894 },
	{ (Il2CppRGCTXDataType)3, 52252 },
	{ (Il2CppRGCTXDataType)2, 10548 },
	{ (Il2CppRGCTXDataType)3, 47100 },
	{ (Il2CppRGCTXDataType)3, 26907 },
	{ (Il2CppRGCTXDataType)2, 7078 },
	{ (Il2CppRGCTXDataType)2, 10535 },
	{ (Il2CppRGCTXDataType)3, 47025 },
	{ (Il2CppRGCTXDataType)3, 26908 },
	{ (Il2CppRGCTXDataType)2, 4723 },
	{ (Il2CppRGCTXDataType)2, 5018 },
	{ (Il2CppRGCTXDataType)3, 16869 },
	{ (Il2CppRGCTXDataType)3, 16868 },
	{ (Il2CppRGCTXDataType)2, 10490 },
	{ (Il2CppRGCTXDataType)3, 46916 },
	{ (Il2CppRGCTXDataType)3, 52258 },
	{ (Il2CppRGCTXDataType)2, 10534 },
	{ (Il2CppRGCTXDataType)3, 47024 },
	{ (Il2CppRGCTXDataType)3, 26900 },
	{ (Il2CppRGCTXDataType)2, 7077 },
	{ (Il2CppRGCTXDataType)2, 10520 },
	{ (Il2CppRGCTXDataType)3, 46960 },
	{ (Il2CppRGCTXDataType)3, 16867 },
	{ (Il2CppRGCTXDataType)3, 16866 },
	{ (Il2CppRGCTXDataType)3, 26901 },
	{ (Il2CppRGCTXDataType)2, 10489 },
	{ (Il2CppRGCTXDataType)3, 46915 },
	{ (Il2CppRGCTXDataType)3, 52257 },
	{ (Il2CppRGCTXDataType)2, 10519 },
	{ (Il2CppRGCTXDataType)3, 46959 },
	{ (Il2CppRGCTXDataType)3, 26914 },
	{ (Il2CppRGCTXDataType)2, 7079 },
	{ (Il2CppRGCTXDataType)2, 10550 },
	{ (Il2CppRGCTXDataType)3, 47102 },
	{ (Il2CppRGCTXDataType)3, 29094 },
	{ (Il2CppRGCTXDataType)3, 13363 },
	{ (Il2CppRGCTXDataType)3, 16871 },
	{ (Il2CppRGCTXDataType)3, 16870 },
	{ (Il2CppRGCTXDataType)3, 13362 },
	{ (Il2CppRGCTXDataType)3, 26915 },
	{ (Il2CppRGCTXDataType)2, 10491 },
	{ (Il2CppRGCTXDataType)3, 46917 },
	{ (Il2CppRGCTXDataType)3, 52259 },
	{ (Il2CppRGCTXDataType)2, 10549 },
	{ (Il2CppRGCTXDataType)3, 47101 },
	{ (Il2CppRGCTXDataType)3, 16860 },
	{ (Il2CppRGCTXDataType)3, 16861 },
	{ (Il2CppRGCTXDataType)3, 16872 },
	{ (Il2CppRGCTXDataType)3, 369 },
	{ (Il2CppRGCTXDataType)3, 368 },
	{ (Il2CppRGCTXDataType)2, 4709 },
	{ (Il2CppRGCTXDataType)2, 5007 },
	{ (Il2CppRGCTXDataType)3, 16862 },
	{ (Il2CppRGCTXDataType)2, 4746 },
	{ (Il2CppRGCTXDataType)2, 5047 },
	{ (Il2CppRGCTXDataType)3, 371 },
	{ (Il2CppRGCTXDataType)2, 1160 },
	{ (Il2CppRGCTXDataType)2, 1317 },
	{ (Il2CppRGCTXDataType)3, 367 },
	{ (Il2CppRGCTXDataType)3, 370 },
	{ (Il2CppRGCTXDataType)3, 404 },
	{ (Il2CppRGCTXDataType)2, 4712 },
	{ (Il2CppRGCTXDataType)2, 5009 },
	{ (Il2CppRGCTXDataType)3, 406 },
	{ (Il2CppRGCTXDataType)2, 917 },
	{ (Il2CppRGCTXDataType)2, 1325 },
	{ (Il2CppRGCTXDataType)3, 403 },
	{ (Il2CppRGCTXDataType)3, 405 },
	{ (Il2CppRGCTXDataType)3, 248 },
	{ (Il2CppRGCTXDataType)2, 9672 },
	{ (Il2CppRGCTXDataType)3, 42754 },
	{ (Il2CppRGCTXDataType)2, 4703 },
	{ (Il2CppRGCTXDataType)2, 5003 },
	{ (Il2CppRGCTXDataType)3, 42755 },
	{ (Il2CppRGCTXDataType)3, 250 },
	{ (Il2CppRGCTXDataType)2, 912 },
	{ (Il2CppRGCTXDataType)2, 1282 },
	{ (Il2CppRGCTXDataType)3, 247 },
	{ (Il2CppRGCTXDataType)3, 249 },
	{ (Il2CppRGCTXDataType)3, 427 },
	{ (Il2CppRGCTXDataType)3, 428 },
	{ (Il2CppRGCTXDataType)2, 9676 },
	{ (Il2CppRGCTXDataType)3, 42759 },
	{ (Il2CppRGCTXDataType)2, 4715 },
	{ (Il2CppRGCTXDataType)2, 5011 },
	{ (Il2CppRGCTXDataType)3, 42760 },
	{ (Il2CppRGCTXDataType)3, 430 },
	{ (Il2CppRGCTXDataType)2, 919 },
	{ (Il2CppRGCTXDataType)2, 1328 },
	{ (Il2CppRGCTXDataType)3, 426 },
	{ (Il2CppRGCTXDataType)3, 429 },
	{ (Il2CppRGCTXDataType)3, 340 },
	{ (Il2CppRGCTXDataType)2, 9674 },
	{ (Il2CppRGCTXDataType)3, 42756 },
	{ (Il2CppRGCTXDataType)2, 4706 },
	{ (Il2CppRGCTXDataType)2, 5005 },
	{ (Il2CppRGCTXDataType)3, 42757 },
	{ (Il2CppRGCTXDataType)3, 42758 },
	{ (Il2CppRGCTXDataType)3, 342 },
	{ (Il2CppRGCTXDataType)2, 914 },
	{ (Il2CppRGCTXDataType)2, 1309 },
	{ (Il2CppRGCTXDataType)3, 339 },
	{ (Il2CppRGCTXDataType)3, 341 },
	{ (Il2CppRGCTXDataType)2, 11304 },
	{ (Il2CppRGCTXDataType)2, 2836 },
	{ (Il2CppRGCTXDataType)3, 15484 },
	{ (Il2CppRGCTXDataType)2, 3857 },
	{ (Il2CppRGCTXDataType)2, 11764 },
	{ (Il2CppRGCTXDataType)3, 42751 },
	{ (Il2CppRGCTXDataType)3, 42752 },
	{ (Il2CppRGCTXDataType)2, 5221 },
	{ (Il2CppRGCTXDataType)3, 42753 },
	{ (Il2CppRGCTXDataType)2, 815 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)3, 260 },
	{ (Il2CppRGCTXDataType)3, 36910 },
	{ (Il2CppRGCTXDataType)2, 8522 },
	{ (Il2CppRGCTXDataType)3, 36937 },
	{ (Il2CppRGCTXDataType)2, 1663 },
	{ (Il2CppRGCTXDataType)3, 3165 },
	{ (Il2CppRGCTXDataType)3, 36916 },
	{ (Il2CppRGCTXDataType)3, 13303 },
	{ (Il2CppRGCTXDataType)2, 956 },
	{ (Il2CppRGCTXDataType)3, 36911 },
	{ (Il2CppRGCTXDataType)2, 8517 },
	{ (Il2CppRGCTXDataType)3, 3594 },
	{ (Il2CppRGCTXDataType)2, 1686 },
	{ (Il2CppRGCTXDataType)2, 3027 },
	{ (Il2CppRGCTXDataType)3, 13321 },
	{ (Il2CppRGCTXDataType)3, 36912 },
	{ (Il2CppRGCTXDataType)3, 13298 },
	{ (Il2CppRGCTXDataType)3, 13299 },
	{ (Il2CppRGCTXDataType)3, 13297 },
	{ (Il2CppRGCTXDataType)3, 13300 },
	{ (Il2CppRGCTXDataType)2, 3023 },
	{ (Il2CppRGCTXDataType)2, 11363 },
	{ (Il2CppRGCTXDataType)3, 16858 },
	{ (Il2CppRGCTXDataType)3, 13302 },
	{ (Il2CppRGCTXDataType)2, 4540 },
	{ (Il2CppRGCTXDataType)3, 13301 },
	{ (Il2CppRGCTXDataType)2, 4382 },
	{ (Il2CppRGCTXDataType)2, 11294 },
	{ (Il2CppRGCTXDataType)2, 4661 },
	{ (Il2CppRGCTXDataType)2, 4970 },
	{ (Il2CppRGCTXDataType)3, 15463 },
	{ (Il2CppRGCTXDataType)2, 3850 },
	{ (Il2CppRGCTXDataType)3, 17802 },
	{ (Il2CppRGCTXDataType)3, 17803 },
	{ (Il2CppRGCTXDataType)3, 17808 },
	{ (Il2CppRGCTXDataType)2, 5215 },
	{ (Il2CppRGCTXDataType)3, 17805 },
	{ (Il2CppRGCTXDataType)3, 53471 },
	{ (Il2CppRGCTXDataType)2, 3031 },
	{ (Il2CppRGCTXDataType)3, 13351 },
	{ (Il2CppRGCTXDataType)1, 4531 },
	{ (Il2CppRGCTXDataType)2, 11310 },
	{ (Il2CppRGCTXDataType)3, 17804 },
	{ (Il2CppRGCTXDataType)1, 11310 },
	{ (Il2CppRGCTXDataType)1, 5215 },
	{ (Il2CppRGCTXDataType)2, 11762 },
	{ (Il2CppRGCTXDataType)2, 11310 },
	{ (Il2CppRGCTXDataType)2, 4667 },
	{ (Il2CppRGCTXDataType)2, 4974 },
	{ (Il2CppRGCTXDataType)3, 17809 },
	{ (Il2CppRGCTXDataType)3, 17807 },
	{ (Il2CppRGCTXDataType)3, 17806 },
	{ (Il2CppRGCTXDataType)2, 690 },
	{ (Il2CppRGCTXDataType)3, 13364 },
	{ (Il2CppRGCTXDataType)2, 931 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	194,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	65,
	s_rgctxIndices,
	300,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
