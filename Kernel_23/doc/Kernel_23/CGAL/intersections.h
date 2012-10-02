namespace CGAL {

/*!
\addtogroup do_intersect_linear do_intersect (Linear Kernel)
\ingroup kernel_global_function

\details Depending on which \cgal kernel is used, different versions of this
global function are available.

## With the 2D and 3D Linear %Kernel ##

\details See Chapter \ref chapterkernel23

\code
#include <CGAL/intersections.h>
\endcode

The types `Type1` and `Type2` can be any of the following:

- `Point_2<Kernel>`
- `Line_2<Kernel>`
- `Ray_2<Kernel>`
- `Segment_2<Kernel>`
- `Triangle_2<Kernel>`
- `Iso_rectangle_2<Kernel>`

Also, `Type1` and `Type2` can be both of type

- `Line_2<Kernel>`
- `Circle_2<Kernel>`

In three-dimensional space, the types `Type1` and
`Type2` can be any of the following:

- `Plane_3<Kernel>`
- `Line_3<Kernel>`
- `Ray_3<Kernel>`
- `Segment_3<Kernel>`
- `Triangle_3<Kernel>`.
- `Bbox_3`.

Also, `Type1` and `Type2` can be respectively of types

- `Triangle_3<Kernel>` and `Tetrahedron_3<Kernel>`
- `Plane_3<Kernel>` and `Sphere_3<Kernel>` (or the contrary)
- `Sphere_3<Kernel>` and `Sphere_3<Kernel>`.

## With the 2D Circular %Kernel ##

\details See Chapter \ref chaptercircularkernel

\code
#include <CGAL/Circular_kernel_intersections.h>
\endcode

If this kernel is used, in addition to the combinations of 2D types
previously listed, `Type1` and `Type2` can be any of
the following:

- `Line_2<CircularKernel>`
- `Circle_2<CircularKernel>`
- `Line_arc_2<CircularKernel>`
- `Circular_arc_2<CircularKernel>`

An example illustrating this is presented in
Chapter  \ref chaptercircularkernel.


## With the 3D Spherical Kernel ## 

\details See Chapter \ref chaptersphericalkernel

\code
#include <CGAL/Spherical_kernel_intersections.h>
\endcode

If this kernel is used, in addition to the combinations of 3D types
previously listed, `Type1` and `Type2` can be any of
the following:

- `Line_3<SphericalKernel>`
- `Circle_3<SphericalKernel>`
- `Plane_3<SphericalKernel>`
- `Sphere_3<SphericalKernel>`
- `Line_arc_3<SphericalKernel>`
- `Circular_arc_3<SphericalKernel>`

An example illustrating this is presented in
Chapter \ref chaptersphericalkernel.

\sa `CGAL::intersection`
*/
/// @{

/*!
checks whether `obj1` and `obj2` intersect.  Two objects `obj1` and
`obj2` intersect if there is a point `p` that is part of both `obj1`
and `obj2`.  The intersection region of those two objects is defined
as the set of all points `p` that are part of both `obj1` and `obj2`.
Note that for objects like triangles and polygons that enclose a
bounded region, this region is part of the object.
*/
template <typename Type1, typename Type2>
bool do_intersect(Type1 obj1, Type2 obj2);

/*!
\ingroup kernel_global_function

checks whether `obj1`, `obj2` and `obj3` intersect.

`Type1`, `Type2` and `Type3` can be:

- `Sphere_3<SphericalKernel>`
- `Plane_3<SphericalKernel>`

\attention Only available with a SphericalKernel.

*/
  template <typename Type1, typename Type2, typename Type3>
bool do_intersect(Type1 obj1, Type2 obj2, Type3 obj3);


/// @}


/*!
\defgroup intersection intersection
\ingroup kernel_global_function

\brief 
\details Depending on which \cgal kernel is used, different versions of this
global function are available.
*/


/*!
\addtogroup intersection_linear intersection (Linear Kernel)
\ingroup intersection
\brief

### Example ###

The following example demonstrates the most common use of 
`intersection` routines with the 2D and 3D Linear %Kernel.

\code
#include <CGAL/intersections.h>

void foo(CGAL::Segment_2<Kernel> seg, CGAL::Line_2<Kernel> line)
{
    CGAL::Object result = CGAL::intersection(seg, line);
    if (const CGAL::Point_2<Kernel> *ipoint = CGAL::object_cast<CGAL::Point_2<Kernel> >(&result)) {
        // handle the point intersection case with *ipoint.
    } else
        if (const CGAL::Segment_2<Kernel> *iseg = CGAL::object_cast<CGAL::Segment_2<Kernel> >(&result)) {
            // handle the segment intersection case with *iseg.
        } else {
            // handle the no intersection case.
        }
}
\endcode

Examples illustrating the use of this function in the case of the 2D
Circular %Kernel and the 3D Spherical %Kernel are presented respectively
in Chapters \ref chaptercircularkernel and \ref
chaptersphericalkernel.


\sa `CGAL::do_intersect` 
\sa `CGAL::Object` 

\details See Chapter  \ref chapterkernel23
*/
/// @{

/*!
Two objects `obj1` and `obj2` intersect if there is a point `p` that
is part of both `obj1` and `obj2`.  The intersection region of those
two objects is defined as the set of all points `p` that are part of
both `obj1` and `obj2`.  Note that for objects like triangles and
polygons that enclose a bounded region, this region is considered part
of the object.  If a segment lies completely inside a triangle, then
those two objects intersect and the intersection region is the
complete segment.

The possible value for types `Type1` and `Type2` and the
possible return values wrapped in `Object` are the
following:

<DIV ALIGN="CENTER">
<TABLE CELLPADDING=3 BORDER="1">
<TR> <TH> Type1 </TH>
 <TH> Type2 </TH>
 <TH> Return Type:  Object<Type> </TH>
</TR>
<TR>
    <TD VALIGN="CENTER" > Iso_rectangle_2 </TD>
    <TD VALIGN="CENTER" > Iso_rectangle_2 </TD>
    <TD>Iso_rectangle_2</TD>
</TR>

<TR>
    <TD VALIGN="CENTER" > Iso_rectangle_2 </TD>
    <TD VALIGN="CENTER" > Line_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Iso_rectangle_2 </TD>
    <TD VALIGN="CENTER" > Ray_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Iso_rectangle_2 </TD>
    <TD VALIGN="CENTER" > Segment_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Iso_rectangle_2 </TD>
    <TD VALIGN="CENTER" > Triangle_2 </TD>
    <TD>Point_2, or Segment_2, or Triangle_2, or std::vector&lt;Point_2&gt;</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_2 </TD>
    <TD VALIGN="CENTER" > Line_2 </TD>
    <TD>Point_2, or Line_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_2 </TD>
    <TD VALIGN="CENTER" > Ray_2 </TD>
    <TD>Point_2, or Ray_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_2 </TD>
    <TD VALIGN="CENTER" > Segment_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_2 </TD>
    <TD VALIGN="CENTER" > Triangle_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Ray_2 </TD>
    <TD VALIGN="CENTER" > Ray_2 </TD>
    <TD>Point_2, or Segment_2, or Ray_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Ray_2 </TD>
    <TD VALIGN="CENTER" > Segment_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Ray_2 </TD>
    <TD VALIGN="CENTER" > Triangle_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Segment_2 </TD>
    <TD VALIGN="CENTER" > Segment_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Segment_2 </TD>
    <TD VALIGN="CENTER" > Triangle_2 </TD>
    <TD>Point_2, or Segment_2</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Triangle_2 </TD>
    <TD VALIGN="CENTER" > Triangle_2 </TD>
    <TD>Point_2, or Segment_2, or Triangle_2, or std::vector&lt;Point_2&gt;</TD>
</TR>

</TABLE>
<TABLE CELLPADDING=3 BORDER="1">
<TR> <TH> Type1 </TH>
 <TH> Type2 </TH>
 <TH> Return Type: Object<Type> </TH>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_3 </TD>
    <TD VALIGN="CENTER" > Line_3 </TD>
    <TD>Point_3, or Line_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_3 </TD>
    <TD VALIGN="CENTER" > Plane_3 </TD>
    <TD>Point_3, or Line_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_3 </TD>
    <TD VALIGN="CENTER" > Ray_3 </TD>
    <TD>Point_3, or Ray_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_3 </TD>
    <TD VALIGN="CENTER" > Segment_3 </TD>
    <TD>Point_3, or Segment_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Line_3 </TD>
    <TD VALIGN="CENTER" > Triangle_3 </TD>
    <TD>Point_3, or Segment_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Plane_3 </TD>
    <TD VALIGN="CENTER" > Plane_3 </TD>
    <TD>Line_3, or Plane_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Plane_3 </TD>
    <TD VALIGN="CENTER" > Ray_3 </TD>
    <TD>Point_3, or Ray_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Plane_3 </TD>
    <TD VALIGN="CENTER" > Segment_3 </TD>
    <TD>Point_3, or Segment_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Plane_3 </TD>
    <TD VALIGN="CENTER" > Sphere_3 </TD>
    <TD>Point_3, or Circle_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Plane_3 </TD>
    <TD VALIGN="CENTER" > Triangle_3 </TD>
    <TD>Point_3, or Segment_3, or Triangle_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Ray_3 </TD>
    <TD VALIGN="CENTER" > Ray_3 </TD>
    <TD>Point_3, or Ray_3, or Segment_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Ray_3 </TD>
    <TD VALIGN="CENTER" > Segment_3 </TD>
    <TD>Point_3, or Segment_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Ray_3 </TD>
    <TD VALIGN="CENTER" > Triangle_3 </TD>
p    <TD>Point_3, or Segment_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Segment_3 </TD>
    <TD VALIGN="CENTER" > Segment_3 </TD>
    <TD>Point_3, or Segment_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Segment_3 </TD>
    <TD VALIGN="CENTER" > Triangle_3 </TD>
    <TD>Point_3, or Segment_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Sphere_3 </TD>
    <TD VALIGN="CENTER" > Sphere_3 </TD>
    <TD>Point_3, or Circle_3, or Sphere_3</TD>
</TR>
<TR>
    <TD VALIGN="CENTER" > Triangle_3 </TD>
    <TD VALIGN="CENTER" > Triangle_3 </TD>
    <TD>Point_3, or Segment_3, or Triangle_3, or std::vector &lt; Point_3  &gt;</TD>
</TR>
</TABLE>
</DIV>
*/
Object intersection(Type1<Kernel> obj1, Type2<Kernel> obj2);

/*!
returns the intersection of 3 planes, which can be either a
point, a line, a plane, or empty.
*/
Object intersection(const Plane_3<Kernel>& pl1,
                    const Plane_3<Kernel>& pl2,
                    const Plane_3<Kernel>& pl3);

/// @}

/*!
\addtogroup intersection_circular intersection (Circular Kernel)
\ingroup intersection
\details See Chapter \ref chaptercircularkernel

\code
#include <CGAL/Circular_kernel_intersections.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 2D types described above, another version of the function
is provided.

Since both the number of intersections, if any, and their type,
depend on the arguments, the function returns an output
iterator on `Object`'s, as presented below.

*/
/// @{

/*!
Copies in the output iterator the intersection elements between the
two objects. `intersections` iterates on
elements of type `CGAL::Object`, in lexicographic order,

where `Type1` and `Type2` can both be either

- `Line_2<CircularKernel>` or
- `Line_arc_2<CircularKernel>` or
- `Circle_2<CircularKernel>` or
- `Circular_arc_2<CircularKernel>`

\details Depending on the types `Type1` and `Type2`, these elements can be assigned to

- `std::pair<Circular_arc_point_2<CircularKernel>, unsigned>`,
  where the unsigned integer is the multiplicity of the corresponding
  intersection point between `obj1` and `obj2`,
- `Circular_arc_2<CircularKernel>` in case of an overlap of 
  two circular arcs,
- `Line_arc_2<CircularKernel>` in case of an overlap of two 
  line segments or
- `Line_2<CircularKernel>` or 
  `Circle_2<CircularKernel>` in case of two equal input lines or circles.

*/
template < typename Type1, typename Type2, typename OutputIterator >
OutputIterator
intersection(const Type1 &obj1, const Type2 &obj2,
             OutputIterator intersections);



/// @}

/*!
\addtogroup intersection_spherical intersection (Spherical Kernel)
\ingroup intersection
\details See Chapter \ref chaptersphericalkernel

\code
#include <CGAL/Spherical_kernel_intersections.h>
\endcode

If this kernel is used, in addition to the function and the
combination of 3D types described above, two other versions of the function
are provided.

Since both the number of intersections, if any, and their type,
depend on the arguments, the functions return an output
iterator on `Object`'s, as presented below.
*/
/// @{

/*!
Copies in the output iterator the intersection elements between the
two objects. `intersections` iterates on
elements of type `CGAL::Object`, in lexicographic order,
when this ordering is defined on the computed objects,

where `SphericalType1` and `SphericalType2` can both be either:

- `Sphere_3<SphericalKernel>`,
- `Plane_3<SphericalKernel>`,
- `Line_3<SphericalKernel>`,
- `Circle_3<SphericalKernel>`,
- `Line_arc_3<SphericalKernel>` or
- `Circular_arc_3<SphericalKernel>`,


and depending on the types `SphericalType1` and `SphericalType2`, the computed 
`CGAL::Object`s can be assigned to 

- `std::pair<Circular_arc_point_3<SphericalKernel>, unsigned>`,
  where the unsigned integer is the multiplicity of the corresponding
  intersection point between `obj1` and `obj2`,
- `SphericalType1`, when `SphericalType1` and `SphericalType2` are equal, 
  and if the two objets `obj1` and `obj2` are equal,
- `Line_3<SphericalKernel>` or 
  `Circle_3<SphericalKernel>` when `SphericalType1` and `SphericalType2` 
  are two-dimensional objets intersecting along a curve (2 planes, or 2
  spheres, or one plane and one sphere),
- `Circular_arc_3<SphericalKernel>` in case of an overlap of 
  two circular arcs or
- `Line_arc_3<SphericalKernel>` in case of an overlap of two 
  line segments. 
*/
template < typename SphericalType1, typename SphericalType1,  typename OutputIterator >
OutputIterator
intersection(const SphericalType1 &obj1, const SphericalType2 &obj2,
             OutputIterator intersections);


/*!
Copies in the output iterator the intersection elements between the
three objects. `intersections` iterates on
elements of type `CGAL::Object`, in lexicographic order 
when this ordering is defined on the computed objects

where `Type1`, `Type2` and `Type3`
can be either

- `Sphere_3<SphericalKernel>` or
- `Plane_3<SphericalKernel>`


and depending of these types, the computed `CGAL::Object`s can be 
assigned to 

- `std::pair<Circular_arc_point_3<SphericalKernel>, unsigned>`,
  where the unsigned integer is the multiplicity of the corresponding
  intersection point,
- `Circle_3<SphericalKernel>` or
- `Type1`, when `Type1`, `Type2` and 
  `Type3` are equal, and if the three objets `obj1` and `obj2` 
  and `obj3` are equal.
*/
template < typename Type1, typename Type2, typename OutputIterator >
OutputIterator
intersection(const Type1 &obj1, const Type2 &obj2, const Type3 &obj3,
             OutputIterator intersections);

/// @}
}
