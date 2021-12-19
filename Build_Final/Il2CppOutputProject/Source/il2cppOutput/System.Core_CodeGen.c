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
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000028 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000029 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007A TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000083 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000085 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000086 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000089 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000008A System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000008B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000008C TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000008E System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000008F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000090 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000092 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000093 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000094 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000095 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000096 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000097 System.Void System.Linq.Set`1::Resize()
// 0x00000098 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000099 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009A System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009B System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A0 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A1 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A2 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A3 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A4 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A5 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A6 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A7 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A8 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A9 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AA System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AB System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AC System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AD System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AE System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AF TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B8 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000B9 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BA System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BB System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BC System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C6 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C7 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CB T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CC System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CD System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[205] = 
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
static const int32_t s_InvokerIndices[205] = 
{
	6929,
	6929,
	7164,
	7164,
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
	6824,
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
static const Il2CppTokenRangePair s_rgctxIndices[68] = 
{
	{ 0x02000004, { 103, 4 } },
	{ 0x02000005, { 107, 9 } },
	{ 0x02000006, { 118, 7 } },
	{ 0x02000007, { 127, 10 } },
	{ 0x02000008, { 139, 11 } },
	{ 0x02000009, { 153, 9 } },
	{ 0x0200000A, { 165, 12 } },
	{ 0x0200000B, { 180, 1 } },
	{ 0x0200000C, { 181, 2 } },
	{ 0x0200000D, { 183, 12 } },
	{ 0x0200000E, { 195, 8 } },
	{ 0x0200000F, { 203, 11 } },
	{ 0x02000010, { 214, 12 } },
	{ 0x02000011, { 226, 12 } },
	{ 0x02000012, { 238, 6 } },
	{ 0x02000013, { 244, 2 } },
	{ 0x02000015, { 246, 8 } },
	{ 0x02000017, { 254, 3 } },
	{ 0x02000018, { 259, 5 } },
	{ 0x02000019, { 264, 7 } },
	{ 0x0200001A, { 271, 3 } },
	{ 0x0200001B, { 274, 7 } },
	{ 0x0200001C, { 281, 4 } },
	{ 0x0200001D, { 285, 23 } },
	{ 0x0200001F, { 308, 2 } },
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
	{ 0x06000018, { 55, 2 } },
	{ 0x06000019, { 57, 2 } },
	{ 0x0600001A, { 59, 4 } },
	{ 0x0600001B, { 63, 4 } },
	{ 0x0600001C, { 67, 3 } },
	{ 0x0600001D, { 70, 4 } },
	{ 0x0600001E, { 74, 3 } },
	{ 0x0600001F, { 77, 3 } },
	{ 0x06000020, { 80, 1 } },
	{ 0x06000021, { 81, 1 } },
	{ 0x06000022, { 82, 3 } },
	{ 0x06000023, { 85, 3 } },
	{ 0x06000024, { 88, 2 } },
	{ 0x06000025, { 90, 3 } },
	{ 0x06000026, { 93, 2 } },
	{ 0x06000027, { 95, 5 } },
	{ 0x06000028, { 100, 3 } },
	{ 0x06000039, { 116, 2 } },
	{ 0x0600003E, { 125, 2 } },
	{ 0x06000043, { 137, 2 } },
	{ 0x06000049, { 150, 3 } },
	{ 0x0600004E, { 162, 3 } },
	{ 0x06000053, { 177, 3 } },
	{ 0x0600009C, { 257, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[310] = 
{
	{ (Il2CppRGCTXDataType)2, 7114 },
	{ (Il2CppRGCTXDataType)3, 27137 },
	{ (Il2CppRGCTXDataType)2, 11307 },
	{ (Il2CppRGCTXDataType)2, 10529 },
	{ (Il2CppRGCTXDataType)3, 47317 },
	{ (Il2CppRGCTXDataType)2, 7826 },
	{ (Il2CppRGCTXDataType)2, 10559 },
	{ (Il2CppRGCTXDataType)3, 47361 },
	{ (Il2CppRGCTXDataType)2, 10541 },
	{ (Il2CppRGCTXDataType)3, 47333 },
	{ (Il2CppRGCTXDataType)2, 7115 },
	{ (Il2CppRGCTXDataType)3, 27138 },
	{ (Il2CppRGCTXDataType)2, 11339 },
	{ (Il2CppRGCTXDataType)2, 10571 },
	{ (Il2CppRGCTXDataType)3, 47377 },
	{ (Il2CppRGCTXDataType)2, 7853 },
	{ (Il2CppRGCTXDataType)2, 10601 },
	{ (Il2CppRGCTXDataType)3, 47519 },
	{ (Il2CppRGCTXDataType)2, 10586 },
	{ (Il2CppRGCTXDataType)3, 47442 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)3, 193 },
	{ (Il2CppRGCTXDataType)3, 194 },
	{ (Il2CppRGCTXDataType)2, 4089 },
	{ (Il2CppRGCTXDataType)3, 17023 },
	{ (Il2CppRGCTXDataType)2, 1286 },
	{ (Il2CppRGCTXDataType)3, 203 },
	{ (Il2CppRGCTXDataType)3, 204 },
	{ (Il2CppRGCTXDataType)2, 4106 },
	{ (Il2CppRGCTXDataType)3, 17032 },
	{ (Il2CppRGCTXDataType)3, 52820 },
	{ (Il2CppRGCTXDataType)2, 1327 },
	{ (Il2CppRGCTXDataType)3, 380 },
	{ (Il2CppRGCTXDataType)3, 52826 },
	{ (Il2CppRGCTXDataType)2, 1335 },
	{ (Il2CppRGCTXDataType)3, 416 },
	{ (Il2CppRGCTXDataType)2, 8567 },
	{ (Il2CppRGCTXDataType)3, 37250 },
	{ (Il2CppRGCTXDataType)2, 8568 },
	{ (Il2CppRGCTXDataType)3, 37251 },
	{ (Il2CppRGCTXDataType)3, 22368 },
	{ (Il2CppRGCTXDataType)3, 52756 },
	{ (Il2CppRGCTXDataType)2, 1292 },
	{ (Il2CppRGCTXDataType)3, 260 },
	{ (Il2CppRGCTXDataType)3, 52864 },
	{ (Il2CppRGCTXDataType)2, 1338 },
	{ (Il2CppRGCTXDataType)3, 439 },
	{ (Il2CppRGCTXDataType)3, 52777 },
	{ (Il2CppRGCTXDataType)2, 1319 },
	{ (Il2CppRGCTXDataType)3, 352 },
	{ (Il2CppRGCTXDataType)2, 1672 },
	{ (Il2CppRGCTXDataType)3, 3188 },
	{ (Il2CppRGCTXDataType)3, 3189 },
	{ (Il2CppRGCTXDataType)2, 7827 },
	{ (Il2CppRGCTXDataType)3, 29327 },
	{ (Il2CppRGCTXDataType)2, 4637 },
	{ (Il2CppRGCTXDataType)3, 52691 },
	{ (Il2CppRGCTXDataType)2, 1289 },
	{ (Il2CppRGCTXDataType)3, 246 },
	{ (Il2CppRGCTXDataType)2, 6187 },
	{ (Il2CppRGCTXDataType)2, 4396 },
	{ (Il2CppRGCTXDataType)2, 4653 },
	{ (Il2CppRGCTXDataType)2, 4985 },
	{ (Il2CppRGCTXDataType)2, 6188 },
	{ (Il2CppRGCTXDataType)2, 4397 },
	{ (Il2CppRGCTXDataType)2, 4654 },
	{ (Il2CppRGCTXDataType)2, 4986 },
	{ (Il2CppRGCTXDataType)2, 4655 },
	{ (Il2CppRGCTXDataType)2, 4987 },
	{ (Il2CppRGCTXDataType)3, 17025 },
	{ (Il2CppRGCTXDataType)2, 6189 },
	{ (Il2CppRGCTXDataType)2, 4398 },
	{ (Il2CppRGCTXDataType)2, 4656 },
	{ (Il2CppRGCTXDataType)2, 4988 },
	{ (Il2CppRGCTXDataType)2, 4657 },
	{ (Il2CppRGCTXDataType)2, 4989 },
	{ (Il2CppRGCTXDataType)3, 17026 },
	{ (Il2CppRGCTXDataType)2, 6186 },
	{ (Il2CppRGCTXDataType)2, 4652 },
	{ (Il2CppRGCTXDataType)2, 4984 },
	{ (Il2CppRGCTXDataType)2, 2852 },
	{ (Il2CppRGCTXDataType)2, 4633 },
	{ (Il2CppRGCTXDataType)2, 4634 },
	{ (Il2CppRGCTXDataType)2, 4981 },
	{ (Il2CppRGCTXDataType)3, 17022 },
	{ (Il2CppRGCTXDataType)2, 4632 },
	{ (Il2CppRGCTXDataType)2, 4980 },
	{ (Il2CppRGCTXDataType)3, 17021 },
	{ (Il2CppRGCTXDataType)2, 4395 },
	{ (Il2CppRGCTXDataType)2, 4650 },
	{ (Il2CppRGCTXDataType)2, 4651 },
	{ (Il2CppRGCTXDataType)2, 4983 },
	{ (Il2CppRGCTXDataType)3, 17024 },
	{ (Il2CppRGCTXDataType)2, 4394 },
	{ (Il2CppRGCTXDataType)3, 52729 },
	{ (Il2CppRGCTXDataType)3, 15613 },
	{ (Il2CppRGCTXDataType)2, 3862 },
	{ (Il2CppRGCTXDataType)2, 4636 },
	{ (Il2CppRGCTXDataType)2, 4982 },
	{ (Il2CppRGCTXDataType)2, 5233 },
	{ (Il2CppRGCTXDataType)2, 4683 },
	{ (Il2CppRGCTXDataType)2, 4995 },
	{ (Il2CppRGCTXDataType)3, 17261 },
	{ (Il2CppRGCTXDataType)3, 27139 },
	{ (Il2CppRGCTXDataType)3, 27141 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)3, 27140 },
	{ (Il2CppRGCTXDataType)3, 27149 },
	{ (Il2CppRGCTXDataType)2, 7118 },
	{ (Il2CppRGCTXDataType)2, 10542 },
	{ (Il2CppRGCTXDataType)3, 47334 },
	{ (Il2CppRGCTXDataType)3, 27150 },
	{ (Il2CppRGCTXDataType)2, 4746 },
	{ (Il2CppRGCTXDataType)2, 5043 },
	{ (Il2CppRGCTXDataType)3, 17040 },
	{ (Il2CppRGCTXDataType)3, 52694 },
	{ (Il2CppRGCTXDataType)2, 10587 },
	{ (Il2CppRGCTXDataType)3, 47443 },
	{ (Il2CppRGCTXDataType)3, 27142 },
	{ (Il2CppRGCTXDataType)2, 7117 },
	{ (Il2CppRGCTXDataType)2, 10530 },
	{ (Il2CppRGCTXDataType)3, 47318 },
	{ (Il2CppRGCTXDataType)3, 17039 },
	{ (Il2CppRGCTXDataType)3, 27143 },
	{ (Il2CppRGCTXDataType)3, 52693 },
	{ (Il2CppRGCTXDataType)2, 10572 },
	{ (Il2CppRGCTXDataType)3, 47378 },
	{ (Il2CppRGCTXDataType)3, 27156 },
	{ (Il2CppRGCTXDataType)2, 7119 },
	{ (Il2CppRGCTXDataType)2, 10560 },
	{ (Il2CppRGCTXDataType)3, 47362 },
	{ (Il2CppRGCTXDataType)3, 29397 },
	{ (Il2CppRGCTXDataType)3, 13509 },
	{ (Il2CppRGCTXDataType)3, 17041 },
	{ (Il2CppRGCTXDataType)3, 13508 },
	{ (Il2CppRGCTXDataType)3, 27157 },
	{ (Il2CppRGCTXDataType)3, 52695 },
	{ (Il2CppRGCTXDataType)2, 10602 },
	{ (Il2CppRGCTXDataType)3, 47520 },
	{ (Il2CppRGCTXDataType)3, 27170 },
	{ (Il2CppRGCTXDataType)2, 7121 },
	{ (Il2CppRGCTXDataType)2, 10589 },
	{ (Il2CppRGCTXDataType)3, 47445 },
	{ (Il2CppRGCTXDataType)3, 27171 },
	{ (Il2CppRGCTXDataType)2, 4749 },
	{ (Il2CppRGCTXDataType)2, 5046 },
	{ (Il2CppRGCTXDataType)3, 17045 },
	{ (Il2CppRGCTXDataType)3, 17044 },
	{ (Il2CppRGCTXDataType)2, 10544 },
	{ (Il2CppRGCTXDataType)3, 47336 },
	{ (Il2CppRGCTXDataType)3, 52701 },
	{ (Il2CppRGCTXDataType)2, 10588 },
	{ (Il2CppRGCTXDataType)3, 47444 },
	{ (Il2CppRGCTXDataType)3, 27163 },
	{ (Il2CppRGCTXDataType)2, 7120 },
	{ (Il2CppRGCTXDataType)2, 10574 },
	{ (Il2CppRGCTXDataType)3, 47380 },
	{ (Il2CppRGCTXDataType)3, 17043 },
	{ (Il2CppRGCTXDataType)3, 17042 },
	{ (Il2CppRGCTXDataType)3, 27164 },
	{ (Il2CppRGCTXDataType)2, 10543 },
	{ (Il2CppRGCTXDataType)3, 47335 },
	{ (Il2CppRGCTXDataType)3, 52700 },
	{ (Il2CppRGCTXDataType)2, 10573 },
	{ (Il2CppRGCTXDataType)3, 47379 },
	{ (Il2CppRGCTXDataType)3, 27177 },
	{ (Il2CppRGCTXDataType)2, 7122 },
	{ (Il2CppRGCTXDataType)2, 10604 },
	{ (Il2CppRGCTXDataType)3, 47522 },
	{ (Il2CppRGCTXDataType)3, 29398 },
	{ (Il2CppRGCTXDataType)3, 13511 },
	{ (Il2CppRGCTXDataType)3, 17047 },
	{ (Il2CppRGCTXDataType)3, 17046 },
	{ (Il2CppRGCTXDataType)3, 13510 },
	{ (Il2CppRGCTXDataType)3, 27178 },
	{ (Il2CppRGCTXDataType)2, 10545 },
	{ (Il2CppRGCTXDataType)3, 47337 },
	{ (Il2CppRGCTXDataType)3, 52702 },
	{ (Il2CppRGCTXDataType)2, 10603 },
	{ (Il2CppRGCTXDataType)3, 47521 },
	{ (Il2CppRGCTXDataType)3, 17036 },
	{ (Il2CppRGCTXDataType)3, 17037 },
	{ (Il2CppRGCTXDataType)3, 17048 },
	{ (Il2CppRGCTXDataType)3, 383 },
	{ (Il2CppRGCTXDataType)3, 382 },
	{ (Il2CppRGCTXDataType)2, 4735 },
	{ (Il2CppRGCTXDataType)2, 5035 },
	{ (Il2CppRGCTXDataType)3, 17038 },
	{ (Il2CppRGCTXDataType)2, 4772 },
	{ (Il2CppRGCTXDataType)2, 5075 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)2, 1168 },
	{ (Il2CppRGCTXDataType)2, 1328 },
	{ (Il2CppRGCTXDataType)3, 381 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)3, 418 },
	{ (Il2CppRGCTXDataType)2, 4738 },
	{ (Il2CppRGCTXDataType)2, 5037 },
	{ (Il2CppRGCTXDataType)3, 420 },
	{ (Il2CppRGCTXDataType)2, 923 },
	{ (Il2CppRGCTXDataType)2, 1336 },
	{ (Il2CppRGCTXDataType)3, 417 },
	{ (Il2CppRGCTXDataType)3, 419 },
	{ (Il2CppRGCTXDataType)3, 262 },
	{ (Il2CppRGCTXDataType)2, 9725 },
	{ (Il2CppRGCTXDataType)3, 43149 },
	{ (Il2CppRGCTXDataType)2, 4729 },
	{ (Il2CppRGCTXDataType)2, 5031 },
	{ (Il2CppRGCTXDataType)3, 43150 },
	{ (Il2CppRGCTXDataType)3, 264 },
	{ (Il2CppRGCTXDataType)2, 918 },
	{ (Il2CppRGCTXDataType)2, 1293 },
	{ (Il2CppRGCTXDataType)3, 261 },
	{ (Il2CppRGCTXDataType)3, 263 },
	{ (Il2CppRGCTXDataType)3, 441 },
	{ (Il2CppRGCTXDataType)3, 442 },
	{ (Il2CppRGCTXDataType)2, 9729 },
	{ (Il2CppRGCTXDataType)3, 43154 },
	{ (Il2CppRGCTXDataType)2, 4741 },
	{ (Il2CppRGCTXDataType)2, 5039 },
	{ (Il2CppRGCTXDataType)3, 43155 },
	{ (Il2CppRGCTXDataType)3, 444 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)2, 1339 },
	{ (Il2CppRGCTXDataType)3, 440 },
	{ (Il2CppRGCTXDataType)3, 443 },
	{ (Il2CppRGCTXDataType)3, 354 },
	{ (Il2CppRGCTXDataType)2, 9727 },
	{ (Il2CppRGCTXDataType)3, 43151 },
	{ (Il2CppRGCTXDataType)2, 4732 },
	{ (Il2CppRGCTXDataType)2, 5033 },
	{ (Il2CppRGCTXDataType)3, 43152 },
	{ (Il2CppRGCTXDataType)3, 43153 },
	{ (Il2CppRGCTXDataType)3, 356 },
	{ (Il2CppRGCTXDataType)2, 920 },
	{ (Il2CppRGCTXDataType)2, 1320 },
	{ (Il2CppRGCTXDataType)3, 353 },
	{ (Il2CppRGCTXDataType)3, 355 },
	{ (Il2CppRGCTXDataType)3, 248 },
	{ (Il2CppRGCTXDataType)2, 916 },
	{ (Il2CppRGCTXDataType)3, 250 },
	{ (Il2CppRGCTXDataType)2, 1290 },
	{ (Il2CppRGCTXDataType)3, 247 },
	{ (Il2CppRGCTXDataType)3, 249 },
	{ (Il2CppRGCTXDataType)2, 11358 },
	{ (Il2CppRGCTXDataType)2, 2853 },
	{ (Il2CppRGCTXDataType)3, 15653 },
	{ (Il2CppRGCTXDataType)2, 3878 },
	{ (Il2CppRGCTXDataType)2, 11820 },
	{ (Il2CppRGCTXDataType)3, 43146 },
	{ (Il2CppRGCTXDataType)3, 43147 },
	{ (Il2CppRGCTXDataType)2, 5250 },
	{ (Il2CppRGCTXDataType)3, 43148 },
	{ (Il2CppRGCTXDataType)2, 819 },
	{ (Il2CppRGCTXDataType)2, 1295 },
	{ (Il2CppRGCTXDataType)3, 274 },
	{ (Il2CppRGCTXDataType)3, 37225 },
	{ (Il2CppRGCTXDataType)2, 8569 },
	{ (Il2CppRGCTXDataType)3, 37252 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)3, 3190 },
	{ (Il2CppRGCTXDataType)3, 37231 },
	{ (Il2CppRGCTXDataType)3, 13451 },
	{ (Il2CppRGCTXDataType)2, 962 },
	{ (Il2CppRGCTXDataType)3, 37226 },
	{ (Il2CppRGCTXDataType)2, 8564 },
	{ (Il2CppRGCTXDataType)3, 3619 },
	{ (Il2CppRGCTXDataType)2, 1696 },
	{ (Il2CppRGCTXDataType)2, 3045 },
	{ (Il2CppRGCTXDataType)3, 13469 },
	{ (Il2CppRGCTXDataType)3, 37227 },
	{ (Il2CppRGCTXDataType)3, 13446 },
	{ (Il2CppRGCTXDataType)3, 13447 },
	{ (Il2CppRGCTXDataType)3, 13445 },
	{ (Il2CppRGCTXDataType)3, 13448 },
	{ (Il2CppRGCTXDataType)2, 3041 },
	{ (Il2CppRGCTXDataType)2, 11417 },
	{ (Il2CppRGCTXDataType)3, 17034 },
	{ (Il2CppRGCTXDataType)3, 13450 },
	{ (Il2CppRGCTXDataType)2, 4562 },
	{ (Il2CppRGCTXDataType)3, 13449 },
	{ (Il2CppRGCTXDataType)2, 4403 },
	{ (Il2CppRGCTXDataType)2, 11348 },
	{ (Il2CppRGCTXDataType)2, 4686 },
	{ (Il2CppRGCTXDataType)2, 4997 },
	{ (Il2CppRGCTXDataType)3, 15632 },
	{ (Il2CppRGCTXDataType)2, 3871 },
	{ (Il2CppRGCTXDataType)3, 17978 },
	{ (Il2CppRGCTXDataType)3, 17979 },
	{ (Il2CppRGCTXDataType)3, 17984 },
	{ (Il2CppRGCTXDataType)2, 5244 },
	{ (Il2CppRGCTXDataType)3, 17981 },
	{ (Il2CppRGCTXDataType)3, 53909 },
	{ (Il2CppRGCTXDataType)2, 3049 },
	{ (Il2CppRGCTXDataType)3, 13499 },
	{ (Il2CppRGCTXDataType)1, 4553 },
	{ (Il2CppRGCTXDataType)2, 11364 },
	{ (Il2CppRGCTXDataType)3, 17980 },
	{ (Il2CppRGCTXDataType)1, 11364 },
	{ (Il2CppRGCTXDataType)1, 5244 },
	{ (Il2CppRGCTXDataType)2, 11818 },
	{ (Il2CppRGCTXDataType)2, 11364 },
	{ (Il2CppRGCTXDataType)2, 4692 },
	{ (Il2CppRGCTXDataType)2, 5001 },
	{ (Il2CppRGCTXDataType)3, 17985 },
	{ (Il2CppRGCTXDataType)3, 17983 },
	{ (Il2CppRGCTXDataType)3, 17982 },
	{ (Il2CppRGCTXDataType)2, 694 },
	{ (Il2CppRGCTXDataType)3, 13512 },
	{ (Il2CppRGCTXDataType)2, 937 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	205,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	68,
	s_rgctxIndices,
	310,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
