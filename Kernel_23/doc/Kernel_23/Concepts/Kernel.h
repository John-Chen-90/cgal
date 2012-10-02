namespace Kernel {

/// \name Geometric Object Concepts
/// @{
/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing points in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible 

\sa `Kernel::Angle_2` 
\sa `Kernel::AreOrderedAlongLine_2` 
\sa `Kernel::AreStrictlyOrderedAlongLine_2` 
\sa `Kernel::Collinear_2` 
\sa `Kernel::CollinearAreOrderedAlongLine_2` 
\sa `Kernel::CollinearAreStrictlyOrderedAlongLine_2` 
\sa `Kernel::CompareDistance_2` 
\sa `Kernel::CompareXAtY_2` 
\sa `Kernel::CompareXY_2` 
\sa `Kernel::CompareX_2` 
\sa `Kernel::CompareYAtX_2` 
\sa `Kernel::CompareY_2` 
\sa `Kernel::CompareYX_2` 
\sa `Kernel::ComputeSquaredDistance_2` 
\sa `Kernel::ComputeSquaredRadius_2` 
\sa `Kernel::ComputeX_2` 
\sa `Kernel::ComputeY_2` 
\sa `Kernel::ComputeHx_2` 
\sa `Kernel::ComputeHy_2` 
\sa `Kernel::ConstructBisector_2` 
\sa `Kernel::ConstructCircumcenter_2` 
\sa `Kernel::ConstructLiftedPoint_3` 
\sa `Kernel::ConstructMidpoint_2` 
\sa `Kernel::ConstructPointOn_2` 
\sa `Kernel::ConstructPoint_2` 
\sa `Kernel::ConstructProjectedPoint_2` 
\sa `Kernel::ConstructProjectedXYPoint_2` 
\sa `Kernel::ConstructTranslatedPoint_2` 
\sa `Kernel::DoIntersect_2` 
\sa `Kernel::Equal_2` 
\sa `Kernel::EqualX_2` 
\sa `Kernel::EqualY_2` 
\sa `Kernel::LeftTurn_2` 
\sa `Kernel::LessDistanceToPoint_2` 
\sa `Kernel::LessRotateCCW_2` 
\sa `Kernel::LessSignedDistanceToLine_2` 
\sa `Kernel::LessX_2` 
\sa `Kernel::LessXY_2` 
\sa `Kernel::LessY_2` 
\sa `Kernel::LessYX_2` 
\sa `Kernel::Orientation_2` 
\sa `Kernel::SideOfBoundedCircle_2` 
\sa `Kernel::SideOfOrientedCircle_2` 

*/
class Point_2 {
public:
}; /* end Kernel::Point_2 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing triangles in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Triangle_2<Kernel>` 
\sa `Kernel::BoundedSide_2` 
\sa `Kernel::ComputeArea_2` 
\sa `Kernel::ComputeSquaredDistance_2` 
\sa `Kernel::ConstructCentroid_2` 
\sa `Kernel::ConstructOppositeTriangle_2` 
\sa `Kernel::ConstructTriangle_2` 
\sa `Kernel::ConstructVertex_2` 
\sa `Kernel::DoIntersect_2` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOnBoundary_2` 
\sa `Kernel::HasOnBoundedSide_2` 
\sa `Kernel::HasOnNegativeSide_2` 
\sa `Kernel::HasOnPositiveSide_2` 
\sa `Kernel::HasOnUnboundedSide_2` 
\sa `Kernel::Intersect_2` 
\sa `Kernel::IsDegenerate_2` 
\sa `Kernel::OrientedSide_2` 

*/
class Triangle_2 {
public:
}; /* end Kernel::Triangle_2 */


/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing circles in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Circle_2<Kernel>` 
\sa `Kernel::BoundedSide_2` 
\sa `Kernel::ComputeSquaredRadius_2` 
\sa `Kernel::ConstructCenter_2` 
\sa `Kernel::ConstructCircle_2` 
\sa `Kernel::ConstructOppositeCircle_2` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOnBoundary_2` 
\sa `Kernel::HasOnBoundedSide_2` 
\sa `Kernel::HasOnNegativeSide_2` 
\sa `Kernel::HasOnPositiveSide_2` 
\sa `Kernel::HasOnUnboundedSide_2` 
\sa `Kernel::IsDegenerate_2` 
\sa `Kernel::OrientedSide_2` 

*/
class Circle_2 {
public:

}; /* end Kernel::Circle_2 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing points in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `Kernel::Angle_3` 
\sa `Kernel::AreOrderedAlongLine_3` 
\sa `Kernel::AreStrictlyOrderedAlongLine_3` 
\sa `Kernel::Collinear_3` 
\sa `Kernel::CollinearAreOrderedAlongLine_3` 
\sa `Kernel::CollinearAreStrictlyOrderedAlongLine_3` 
\sa `Kernel::CompareDistance_3` 
\sa `Kernel::CompareXYZ_3` 
\sa `Kernel::CompareXY_3` 
\sa `Kernel::CompareX_3` 
\sa `Kernel::CompareY_3` 
\sa `Kernel::CompareZ_3` 
\sa `Kernel::ComputeSquaredDistance_3` 
\sa `Kernel::ComputeSquaredRadius_3` 
\sa `Kernel::ComputeX_3` 
\sa `Kernel::ComputeY_3` 
\sa `Kernel::ComputeZ_3` 
\sa `Kernel::ConstructBisector_3` 
\sa `Kernel::ConstructCentroid_3` 
\sa `Kernel::ConstructCircumcenter_3` 
\sa `Kernel::ConstructLiftedPoint_3` 
\sa `Kernel::ConstructMidpoint_3` 
\sa `Kernel::ConstructPointOn_3` 
\sa `Kernel::ConstructPoint_3` 
\sa `Kernel::ConstructProjectedPoint_3` 
\sa `Kernel::ConstructTranslatedPoint_3` 
\sa `Kernel::CoplanarOrientation_3` 
\sa `Kernel::CoplanarSideOfBoundedCircle_3` 
\sa `Kernel::Coplanar_3` 
\sa `Kernel::EqualXY_3` 
\sa `Kernel::EqualX_3` 
\sa `Kernel::EqualY_3` 
\sa `Kernel::EqualZ_3` 
\sa `Kernel::Equal_2` 
\sa `Kernel::LessDistanceToPoint_3` 
\sa `Kernel::LessSignedDistanceToPlane_3` 
\sa `Kernel::LessXYZ_3` 
\sa `Kernel::LessXY_3` 
\sa `Kernel::LessX_3` 
\sa `Kernel::LessY_3` 
\sa `Kernel::LessZ_3` 
\sa `Kernel::Orientation_3` 
\sa `Kernel::SideOfBoundedSphere_3` 
\sa `Kernel::SideOfOrientedSphere_3` 

*/
class Point_3 {
public:
}; /* end Kernel::Point_3 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing segments in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Segment_2<Kernel>` 
\sa `Kernel::CollinearHasOn_2` 
\sa `Kernel::ComputeSquaredDistance_2` 
\sa `Kernel::ComputeSquaredLength_2` 
\sa `Kernel::ConstructDirection_2` 
\sa `Kernel::ConstructLine_2` 
\sa `Kernel::ConstructOppositeSegment_2` 
\sa `Kernel::ConstructPointOn_2` 
\sa `Kernel::ConstructSegment_2` 
\sa `Kernel::ConstructSource_2` 
\sa `Kernel::ConstructTarget_2` 
\sa `Kernel::ConstructVertex_2` 
\sa `Kernel::DoIntersect_2` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOn_2` 
\sa `Kernel::Intersect_2` 
\sa `Kernel::IsDegenerate_2` 
\sa `Kernel::IsHorizontal_2` 
\sa `Kernel::IsVertical_2` 

*/
class Segment_2 {
public:
}; /* end Kernel::Segment_2 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing straight lines (and halfspaces) in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Line_2<Kernel>` 
\sa `Kernel::CompareXAtY_2` 
\sa `Kernel::ComputeSquaredDistance_2` 
\sa `Kernel::CompareYAtX_2` 
\sa `Kernel::ConstructBisector_2` 
\sa `Kernel::ConstructDirection_2` 
\sa `Kernel::ConstructLine_2` 
\sa `Kernel::ConstructOppositeLine_2` 
\sa `Kernel::ConstructPerpendicularLine_2` 
\sa `Kernel::ConstructPointOn_2` 
\sa `Kernel::ConstructProjectedPoint_2` 
\sa `Kernel::DoIntersect_2` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOnNegativeSide_2` 
\sa `Kernel::HasOnPositiveSide_2` 
\sa `Kernel::HasOn_2` 
\sa `Kernel::Intersect_2` 
\sa `Kernel::IsDegenerate_2` 
\sa `Kernel::IsHorizontal_2` 
\sa `Kernel::IsVertical_2` 
\sa `Kernel::OrientedSide_2` 

*/
class Line_2 {
public:
}; /* end Kernel::Line_2 */


/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing straight lines in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Line_3<Kernel>` 
\sa `Kernel::ComputeSquaredDistance_3` 
\sa `Kernel::ConstructDirection_3` 
\sa `Kernel::ConstructLine_3` 
\sa `Kernel::ConstructOppositeLine_3` 
\sa `Kernel::ConstructPerpendicularLine_3` 
\sa `Kernel::ConstructPlane_3` 
\sa `Kernel::ConstructPointOn_3` 
\sa `Kernel::ConstructProjectedPoint_3` 
\sa `Kernel::DoIntersect_3` 
\sa `Kernel::Equal_3` 
\sa `Kernel::HasOn_3` 
\sa `Kernel::Intersect_3` 
\sa `Kernel::IsDegenerate_3` 

*/
class Line_3 {
public:
}; /* end Kernel::Line_3 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing segments in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Segment_3<Kernel>` 
\sa `Kernel::ComputeSquaredDistance_3` 
\sa `Kernel::ComputeSquaredLength_3` 
\sa `Kernel::ConstructDirection_3` 
\sa `Kernel::ConstructLine_3` 
\sa `Kernel::ConstructOppositeSegment_3` 
\sa `Kernel::ConstructPlane_3` 
\sa `Kernel::ConstructPointOn_3` 
\sa `Kernel::ConstructSegment_3` 
\sa `Kernel::ConstructVertex_3` 
\sa `Kernel::DoIntersect_3` 
\sa `Kernel::Equal_3` 
\sa `Kernel::HasOn_3` 
\sa `Kernel::Intersect_3` 
\sa `Kernel::IsDegenerate_3` 

*/
class Segment_3 {
public:
}; /* end Kernel::Segment_3 */


/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing triangles in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Triangle_3<Kernel>` 
\sa `Kernel::ComputeSquaredArea_3` 
\sa `Kernel::ConstructCentroid_3` 
\sa `Kernel::ConstructSupportingPlane_3` 
\sa `Kernel::ConstructTriangle_3` 
\sa `Kernel::ConstructVertex_3` 
\sa `Kernel::DoIntersect_3` 
\sa `Kernel::Equal_3` 
\sa `Kernel::HasOn_3` 
\sa `Kernel::IsDegenerate_3` 

*/
class Triangle_3 {
public:
}; /* end Kernel::Triangle_3 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing vectors in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Vector_2<Kernel>` 
\sa `Kernel::ComputeDeterminant_2` 
\sa `Kernel::ComputeX_2` 
\sa `Kernel::ComputeY_2` 
\sa `Kernel::ComputeHx_2` 
\sa `Kernel::ComputeHy_2` 
\sa `Kernel::ConstructDirection_2` 
\sa `Kernel::ConstructOppositeVector_2` 
\sa `Kernel::ConstructPerpendicularVector_2` 
\sa `Kernel::ConstructScaledVector_2` 
\sa `Kernel::ConstructDividedVector_2` 
\sa `Kernel::ConstructSumOfVectors_2` 
\sa `Kernel::ConstructDifferenceOfVectors_2` 
\sa `Kernel::ConstructVector_2` 
\sa `Kernel::Equal_2` 
\sa `Kernel::Orientation_2` 

*/
class Vector_2 {
public:
}; /* end Kernel::Vector_2 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing vectors in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Vector_3<Kernel>` 
\sa `Kernel::ComputeDeterminant_3` 
\sa `Kernel::ComputeX_3` 
\sa `Kernel::ComputeY_3` 
\sa `Kernel::ComputeZ_3` 
\sa `Kernel::ConstructCrossProductVector_3` 
\sa `Kernel::ConstructDirection_3` 
\sa `Kernel::ConstructOppositeVector_3` 
\sa `Kernel::ConstructOrthogonalVector_3` 
\sa `Kernel::ConstructScaledVector_3` 
\sa `Kernel::ConstructDividedVector_3` 
\sa `Kernel::ConstructSumOfVectors_3` 
\sa `Kernel::ConstructDifferenceOfVectors_3` 
\sa `Kernel::ConstructVector_3` 
\sa `Kernel::Equal_3` 
\sa `Kernel::Orientation_3` 

*/
class Vector_3 {
public:

}; /* end Kernel::Vector_3 */


/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing directions in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Direction_2<Kernel>` 
\sa `Kernel::CompareAngleWithXAxis_2` 
\sa `Kernel::ComputeDx_2` 
\sa `Kernel::ComputeDy_2` 
\sa `Kernel::ConstructDirection_2` 
\sa `Kernel::ConstructOppositeDirection_2` 
\sa `Kernel::ConstructPerpendicularDirection_2` 
\sa `Kernel::CounterclockwiseInBetween_2` 
\sa `Kernel::Equal_2` 

*/
class Direction_2 {
public:
}; /* end Kernel::Direction_2 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing directions in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Direction_3<Kernel>` 
\sa `Kernel::ConstructDirection_3` 
\sa `Kernel::ConstructOppositeDirection_3` 
\sa `Kernel::Equal_2` 

*/
class Direction_3 {
public:

}; /* end Kernel::Direction_3 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing circles in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Circle_3<Kernel>` 
\sa `Kernel::ComputeApproximateArea_3` 
\sa `Kernel::ComputeApproximateSquaredLength_3` 
\sa `Kernel::ComputeAreaDividedByPi_3` 
\sa `Kernel::ComputeSquaredLengthDividedByPiSquare_3` 
\sa `Kernel::ComputeSquaredRadius_3` 
\sa `Kernel::ConstructBbox_3` 
\sa `Kernel::ConstructCenter_3` 
\sa `Kernel::ConstructCircle_3` 
\sa `Kernel::ConstructSphere_3` 
\sa `Kernel::ConstructPlane_3` 
\sa `Kernel::Equal_3` 
\sa `Kernel::HasOn_3` 
\sa `Kernel::IsDegenerate_3` 

*/
class Circle_3 {
public:
}; /* end Kernel::Circle_3 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing spheres in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Sphere_3<Kernel>` 
\sa `Kernel::BoundedSide_3` 
\sa `Kernel::ComputeSquaredRadius_3` 
\sa `Kernel::ConstructCenter_3` 
\sa `Kernel::ConstructOppositeSphere_3` 
\sa `Kernel::ConstructRadicalPlane_3` 
\sa `Kernel::ConstructSphere_3` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOnBoundary_3` 
\sa `Kernel::HasOnBoundedSide_3` 
\sa `Kernel::HasOnNegativeSide_3` 
\sa `Kernel::HasOnPositiveSide_3` 
\sa `Kernel::HasOnUnboundedSide_3` 
\sa `Kernel::IsDegenerate_3` 
\sa `Kernel::OrientedSide_3` 

*/
class Sphere_3 {
public:
}; /* end Kernel::Sphere_3 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing rays in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Ray_2<Kernel>` 
\sa `Kernel::CollinearHasOn_2` 
\sa `Kernel::ComputeSquaredDistance_2` 
\sa `Kernel::ConstructDirection_2` 
\sa `Kernel::ConstructLine_2` 
\sa `Kernel::ConstructOppositeRay_2` 
\sa `Kernel::ConstructPointOn_2` 
\sa `Kernel::ConstructRay_2` 
\sa `Kernel::ConstructSource_2` 
\sa `Kernel::ConstructSecondPoint_2` 
\sa `Kernel::DoIntersect_2` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOn_2` 
\sa `Kernel::Intersect_2` 
\sa `Kernel::IsDegenerate_2` 
\sa `Kernel::IsHorizontal_2` 
\sa `Kernel::IsVertical_2` 

*/
class Ray_2 {
public:
}; /* end Kernel::Ray_2 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing rays in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Ray_3<Kernel>` 
\sa `Kernel::ComputeSquaredDistance_3` 
\sa `Kernel::ConstructDirection_3` 
\sa `Kernel::ConstructLine_3` 
\sa `Kernel::ConstructOppositeRay_3` 
\sa `Kernel::ConstructPlane_3` 
\sa `Kernel::ConstructPointOn_3` 
\sa `Kernel::ConstructRay_3` 
\sa `Kernel::DoIntersect_3` 
\sa `Kernel::Equal_3` 
\sa `Kernel::HasOn_3` 
\sa `Kernel::Intersect_3` 
\sa `Kernel::IsDegenerate_3` 

*/
class Ray_3 {
public:
}; /* end Kernel::Ray_3 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing planes (and half-spaces) in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Plane_3<Kernel>` 
\sa `Kernel::ComputeSquaredDistance_3` 
\sa `Kernel::ConstructBaseVector_3` 
\sa `Kernel::ConstructBisector_3` 
\sa `Kernel::ConstructLiftedPoint_3` 
\sa `Kernel::ConstructOppositePlane_3` 
\sa `Kernel::ConstructOrthogonalVector_3` 
\sa `Kernel::ConstructPerpendicularLine_3` 
\sa `Kernel::ConstructPerpendicularPlane_3` 
\sa `Kernel::ConstructPlane_3` 
\sa `Kernel::ConstructPointOn_3` 
\sa `Kernel::ConstructProjectedPoint_3` 
\sa `Kernel::ConstructProjectedXYPoint_2` 
\sa `Kernel::DoIntersect_3` 
\sa `Kernel::Equal_3` 
\sa `Kernel::HasOnNegativeSide_3` 
\sa `Kernel::HasOnPositiveSide_3` 
\sa `Kernel::HasOn_3` 
\sa `Kernel::Intersect_3` 
\sa `Kernel::IsDegenerate_3` 
\sa `Kernel::LessSignedDistanceToPlane_3` 
\sa `Kernel::OrientedSide_3` 

*/
class Plane_3 {
public:
}; /* end Kernel::Plane_3 */


/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing iso-rectangles in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `Kernel::ConstructIsoRectangle_2` 
\sa `Kernel::ComputeXmin_2` 
\sa `Kernel::ComputeXmax_2` 
\sa `Kernel::ComputeYmin_2` 
\sa `Kernel::ComputeYmax_2` 
\sa `Kernel::BoundedSide_2` 
\sa `Kernel::ComputeArea_2` 
\sa `Kernel::ConstructIsoRectangle_2` 
\sa `Kernel::ConstructVertex_2` 
\sa `Kernel::DoIntersect_2` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOnBoundary_2` 
\sa `Kernel::HasOnBoundedSide_2` 
\sa `Kernel::HasOnUnboundedSide_2` 
\sa `Kernel::Intersect_2` 
\sa `Kernel::IsDegenerate_2` 

*/
class IsoRectangle_2 {
public:
}; /* end Kernel::IsoRectangle_2 */


/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing isocuboids in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `Kernel::BoundedSide_3` 
\sa `Kernel::ComputeVolume_3` 
\sa `Kernel::ConstructIsoCuboid_3` 
\sa `Kernel::ConstructVertex_3` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOnBoundary_3` 
\sa `Kernel::HasOnBoundedSide_3` 
\sa `Kernel::HasOnUnboundedSide_3` 
\sa `Kernel::IsDegenerate_3` 

*/
class IsoCuboid_3 {
public:
}; /* end Kernel::IsoCuboid_3 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing different types of objects in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Object` 
\sa `Kernel::Assign_2` 
\sa `Kernel::ConstructObject_2` 
\sa `Kernel::Intersect_2` 

*/
class Object_2 {
public:
}; /* end Kernel::Object_2 */

/*!
\ingroup PkgKernel23ConceptsGeomObject
\cgalconcept

A type representing different types of objects in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Object` 
\sa `Kernel::Assign_3` 
\sa `Kernel::ConstructObject_3` 
\sa `Kernel::Intersect_3` 

*/
class Object_3 {
public:
}; /* end Kernel::Object_3 */



/// @}

/// \name Function Object Concepts
/// @{

/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_2<Kernel>` 

*/
class ConstructScaledVector_2 {
public:

/*! 
produces the vector `v` scaled by a factor `scale`. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Vector_2 &v, const Kernel::RT& scale); 

/*! 
produces the vector `v` scaled by a factor `scale`. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Vector_2 &v, const Kernel::FT& scale); 


}; /* end Kernel::ConstructScaledVector_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Line_3<Kernel>` 
\sa `CGAL::Plane_3<Kernel>` 
\sa `CGAL::Ray_3<Kernel>` 
\sa `CGAL::Segment_3<Kernel>` 

*/
class ConstructPointOn_3 {
public:

/*! 
returns an arbitrary point on `l`. It holds 
`point(i) == point(j)`, iff `i==j`. 
Furthermore, is directed from `point(i)` 
to `point(j)`, for all `i` \f$ <\f$ `j`. 
*/ 
Kernel::Point_3 operator()(const Kernel::Line_3& l, 
int i); 

/*! 
returns an arbitrary point on `h`. 
*/ 
Kernel::Point_3 operator()(const Kernel::Plane_3& h); 

/*! 
returns a point on `r`. `point(0)` is the source, 
`point(i)`, with \f$ i>0\f$, is different from the 
source. \pre \f$ i \geq0\f$. 
*/ 
Kernel::Point_3 operator()(const Kernel::Ray_3& r, 
int i); 

/*! 
returns source or target of `s`: `point(0)` returns 
the source of `s`, `point(1)` returns the target of `s`. 
The parameter `i` is taken modulo 2, which gives 
easy access to the other end point. 
*/ 
Kernel::Point_3 operator()(const Kernel::Segment_3& s, 
int i); 


}; /* end Kernel::ConstructPointOn_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::midpoint` 

*/
class ConstructMidpoint_2 {
public:


/*! 
computes the midpoint of the segment \f$ pq\f$. 
*/ 
Kernel::Point_2 operator()(const Kernel::Point_2& p, 
const Kernel::Point_2& q ); 


}; /* end Kernel::ConstructMidpoint_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 

*/
class ConstructProjectedXYPoint_2 {
public:


/*! 
returns the image point of the projection of `p` under an affine 
transformation, which maps `h` onto the \f$ xy\f$-plane, with the 
\f$ z\f$-coordinate removed. 
*/ 
Kernel::Point_2 operator()(const Kernel::Plane_3& h, 
const Kernel::Point_3& p); 


}; /* end Kernel::ConstructProjectedXYPoint_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Object` 
\sa `Kernel::Assign_2` 
\sa `Kernel::Assign_3` 
\sa `Kernel::Object_2` 
\sa `Kernel::Object_3` 

*/
class ConstructObject_2 {
public:


/*! 
constructs an object that contains `t` and returns it. 
*/ 
template <class T> 
Object_2 operator()(const T& t); 


}; /* end Kernel::ConstructObject_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeHx_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the homogeneous \f$ x\f$-coordinate of the point. 
*/ 
Kernel::FT operator()(const Kernel::Point_2& p) const; 

/*! 
returns the homogeneous \f$ x\f$-coordinate of the vector. 
*/ 
Kernel::FT operator()(const Kernel::Vector_2& v) const; 

/// @}

}; /* end Kernel::ComputeHx_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::coplanar` 

*/
class Coplanar_3 {
public:


/*! 
returns `true`, if \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$ are coplanar. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s); 


}; /* end Kernel::Coplanar_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_xy` 

*/
class LessXY_3 {
public:


/*! 
returns true iff the \f$ x\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ x\f$-coordinate of \f$ q\f$ or if the are the same and 
the \f$ y\f$-coordinate of \f$ p\f$ is smaller than the \f$ y\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::LessXY_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Ray_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 

*/
class IsHorizontal_2 {
public:


/*! 
returns true iff \f$ o\f$ is horizontal. 
*/ 
bool operator()(const Kernel::Line_2&o); 

/*! 
returns true iff \f$ o\f$ is horizontal. 
*/ 
bool operator()(const Kernel::Ray_2&o); 

/*! 
returns true iff \f$ o\f$ is horizontal. 
*/ 
bool operator()(const Kernel::Segment_2&o); 


}; /* end Kernel::IsHorizontal_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_2<Kernel>` 

*/
class ConstructDividedVector_2 {
public:


/*! 
introduces the vector \f$ v/s\f$. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Vector_2 &v, 
const Kernel::RT s); 


}; /* end Kernel::ConstructDividedVector_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::z_equal` 

*/
class EqualZ_3 {
public:


/*! 
returns true iff \f$ p\f$ and \f$ q\f$ have the same Cartesian \f$ z\f$-coordinate. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::EqualZ_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Line_2<Kernel>` 

*/
class ConstructProjectedPoint_2 {
public:


/*! 
returns the orthogonal projection of `p` onto `l`. 
*/ 
Kernel::Point_2 operator()(const Kernel::Line_2& l, 
const Kernel::Point_2& p); 


}; /* end Kernel::ConstructProjectedPoint_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 

*/
class ConstructPlane_3 {
public:


/*! 
creates a plane defined by the equation 
\f$ a\, x +b\, y +c\, z + d = 0\f$. 
Notice that it is degenerate if \f$ a = b = c = 0\f$. 
*/ 
Kernel::Plane_3 operator()(const Kernel::RT &a, 
const Kernel::RT &b, 
const Kernel::RT &c, 
const Kernel::RT &d); 

/*! 
creates a plane passing through the points `p`, 
`q` and `r`. The plane is oriented such that `p`, 
`q` and `r` are oriented in a positive sense 
(that is counterclockwise) when seen from the positive side of the plane. 
Notice that it is degenerate if the points are collinear. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Point_3 &q, 
const Kernel::Point_3 &r); 

/*! 
introduces a plane that passes through point `p` and 
that has as an orthogonal direction equal to `d`. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Direction_3&d); 

/*! 
introduces a plane that passes through point `p` and 
that is orthogonal to `v`. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Vector_3 &v); 

/*! 
introduces a plane that is defined through the three points 
`l.point(0)`, `l.point(1)` and `p`. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Line_3 &l, 
const Kernel::Point_3 &p); 

/*! 
introduces a plane that is defined through the three points 
`r.point(0)`, `r.point(1)` and `p`. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Ray_3 &r, 
const Kernel::Point_3 &p); 

/*! 
introduces a plane that is defined through the three points 
`s.source()`, `s.target()` and `p`. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Segment_3 &s, 
const Kernel::Point_3 &p); 

/*! 
introduces a plane that is defined as the plane containing the circle. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Circle_3 &c); 


}; /* end Kernel::ConstructPlane_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Line_3<Kernel>` 

*/
class ConstructOppositeLine_3 {
public:


/*! 
returns the line representing the same set of points as \f$ l\f$, 
but with opposite direction. 
*/ 
Kernel::Line_3 operator()(const Kernel::Line_3& l); 


}; /* end Kernel::ConstructOppositeLine_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Ray_2<Kernel>` 

*/
class ConstructOppositeRay_2 {
public:


/*! 
returns the ray with the same source as \f$ r\f$, but in opposite direction. 
*/ 
Kernel::Ray_2 operator()(const Kernel::Ray_2& r); 


}; /* end Kernel::ConstructOppositeRay_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_3<Kernel>` 

*/
class ConstructDividedVector_3 {
public:


/*! 
introduces the vector \f$ v/s\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Vector_3 &v, 
const Kernel::RT s); 


}; /* end Kernel::ConstructDividedVector_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::coplanar_side_of_bounded_circle` 

*/
class CoplanarSideOfBoundedCircle_3 {
public:


/*! 
returns the bounded side of the circle defined 
by `p`, `q`, and `r` on which `s` lies. 
\pre `p`, `q`, `r`, and `s` are coplanar and `p`, `q`, and `r` are not collinear. 
*/ 
Bounded_side operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s); 


}; /* end Kernel::CoplanarSideOfBoundedCircle_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class HasOnNegativeSide_3 {
public:


/*! 
returns true iff \f$ p\f$ lies on the negative side of \f$ h\f$ 
(\f$ h\f$ is considered a half-space). 
*/ 
bool operator()(const Kernel::Plane_3&h, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the negative side of \f$ s\f$. 
*/ 
bool operator()(const Kernel::Sphere_3&s, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the negative side of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Tetrahedron_3&t, 
const Kernel::Point_3&p); 


}; /* end Kernel::HasOnNegativeSide_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Vector_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 

*/
class ComputeSquaredLength_2 {
public:


/*! 
returns the squared length of \f$ v\f$. 
*/ 
Kernel::FT operator()(const Kernel::Vector_2& v); 

/*! 
returns the squared length of \f$ s\f$. 
*/ 
Kernel::FT operator()(const Kernel::Segment_2& s); 


}; /* end Kernel::ComputeSquaredLength_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Circle_2<Kernel>` 

*/
class ConstructCenter_2 {
public:


/*! 
compute the center of the circle \f$ c\f$. 
*/ 
Kernel::Point_2 operator()(const Kernel::Circle_2 & c); 


}; /* end Kernel::ConstructCenter_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeHy_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the homogeneous \f$ y\f$-coordinate of the point. 
*/ 
Kernel::FT operator()(const Kernel::Point_2& p) const; 

/*! 
returns the homogeneous \f$ y\f$-coordinate of the vector. 
*/ 
Kernel::FT operator()(const Kernel::Vector_2& v) const; 

/// @}

}; /* end Kernel::ComputeHy_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_x` 

*/
class LessX_3 {
public:


/*! 
returns true iff the \f$ x\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ x\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::LessX_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Ray_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 

*/
class CollinearHasOn_2 {
public:


/*! 
checks if point \f$ p\f$ is on \f$ r\f$. 
\pre \f$ p\f$ is on the supporting line of \f$ r\f$. 
*/ 
bool operator()(const Kernel::Ray_2& r, 
const Kernel::Point_2&p); 

/*! 
checks if point \f$ p\f$ is on \f$ s\f$. 
\pre \f$ p\f$ is on the supporting line of \f$ s\f$. 
*/ 
bool operator()(const Kernel::Segment_2& s, 
const Kernel::Point_2&p); 


}; /* end Kernel::CollinearHasOn_2 */




/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Vector_3<Kernel>` 
\sa `CGAL::Segment_3<Kernel>` 

*/
class ComputeSquaredLength_3 {
public:


/*! 
returns the squared length of \f$ v\f$. 
*/ 
Kernel::FT operator()(const Kernel::Vector_3& v); 

/*! 
returns the squared length of \f$ s\f$. 
*/ 
Kernel::FT operator()(const Kernel::Segment_3& s); 


}; /* end Kernel::ComputeSquaredLength_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Segment_2<Kernel>` 

*/
class ConstructSegment_2 {
public:


/*! 
introduces a segment with source \f$ p\f$ 
and target \f$ q\f$. The segment is directed from the source towards 
the target. 
*/ 
Kernel::Segment_2 operator()(const Kernel::Point_2 &p, const Kernel::Point_2 &q); 


}; /* end Kernel::ConstructSegment_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_y` 

*/
class LessY_2 {
public:


/*! 
returns true iff the \f$ y\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ y\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 


}; /* end Kernel::LessY_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::circumcenter` 

*/
class ConstructCircumcenter_3 {
public:


/*! 
compute the center of the smallest circle passing through the points \f$ p\f$ and 
\f$ q\f$. Note : this is the same as `Kernel::ConstructMidPoint_3`. 
*/ 
Kernel::Point_3 operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 

/*! 
compute the center of the sphere passing through the points \f$ p\f$, \f$ q\f$, \f$ r\f$, 
and \f$ s\f$. \pre \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$ are not coplanar. 
*/ 
Kernel::Point_3 operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s); 

/*! 
compute the center of the sphere passing through the vertices of \f$ t\f$. 
\pre \f$ t\f$ is not degenerate. 
*/ 
Kernel::Point_3 operator()(const Kernel::Tetrahedron_3&t); 

/*! 
compute the center of the circle passing through the points \f$ p\f$, \f$ q\f$ and \f$ r\f$. 
\pre \f$ p\f$, \f$ q\f$ and \f$ r\f$ are not collinear. 
*/ 
Kernel::Point_3 operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 

/*! 
compute the center of the circle passing through the vertices of \f$ t\f$. 
\pre \f$ t\f$ is not degenerate. 
*/ 
Kernel::Point_3 operator()(const Kernel::Triangle_3&t); 


}; /* end Kernel::ConstructCircumcenter_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::circumcenter` 

*/
class ConstructCircumcenter_2 {
public:


/*! 
compute the center of the smallest circle passing through the points \f$ p\f$ and \f$ q\f$. Note : this is the same as `Kernel::ConstructMidPoint_2`. 
*/ 
Kernel::Point_2 operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 

/*! 
compute the center of the circle passing through the points \f$ p\f$, \f$ q\f$, and \f$ r\f$. 
\pre \f$ p\f$, \f$ q\f$, and \f$ r\f$ are not collinear. 
*/ 
Kernel::Point_2 operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 

/*! 
compute the center of the circle passing through the three vertices of \f$ t\f$. 
\pre \f$ t\f$ is not degenerate. 
*/ 
Kernel::Point_2 operator()(const Kernel::Triangle_2&t); 


}; /* end Kernel::ConstructCircumcenter_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::Sphere_3<Kernel>` 

*/
class ConstructSphere_3 {
public:


/*! 
introduces a sphere initialized to the sphere with center `center`, 
squared radius `squared_radius` and orientation 
`orientation`. 
\pre `orientation` \f$ \neq\f$ `COPLANAR`, and furthermore, `squared_radius` \f$ \geq\f$ 0. 
*/ 
Kernel::Sphere_3 operator()(const Kernel::Point_3 & center, 
const Kernel::FT & squared_radius, 
const Orientation & orientation = COUNTERCLOCKWISE); 

/*! 
introduces a sphere initialized to the unique sphere which passes 
through the points `p`, `q`, `r` and `s`. The 
orientation of the sphere is the orientation of the point quadruple 
`p`, `q`, `r`, `s`. 
\pre `p`, `q`, `r`, and `s` are not coplanar. 
*/ 
Kernel::Sphere_3 operator()( const Kernel::Point_3 & p, 
const Kernel::Point_3 & q, 
const Kernel::Point_3 & r, 
const Kernel::Point_3 & s); 

/*! 
introduces a sphere initialized to the smallest sphere which passes 
through the points `p`, `q`, and `r`. The orientation of 
the sphere is `o`. \pre `o` is not `COPLANAR`. 
*/ 
Kernel::Sphere_3 operator()(const Kernel::Point_3 & p, 
const Kernel::Point_3 & q, 
const Kernel::Point_3 & r, 
const Orientation& o = COUNTERCLOCKWISE); 

/*! 
introduces a sphere initialized to the smallest sphere which passes 
through the points `p` and `q`. The orientation of 
the sphere is `o`. \pre `o` is not `COPLANAR`. 
*/ 
Kernel::Sphere_3 operator()(const Kernel::Point_3 & p, 
const Kernel::Point_3 & q, 
const Orientation & o = COUNTERCLOCKWISE); 

/*! 
introduces a sphere \f$ s\f$ initialized to the sphere with center 
`center`, squared radius zero and orientation `orientation`. 
\pre `orientation` \f$ \neq\f$ `COPLANAR`. 
\post `s.is_degenerate()` = `true`. 
*/ 
Kernel::Sphere_3 operator()( const Kernel::Point_3 & center, 
const Orientation & orientation = COUNTERCLOCKWISE); 

/*! 
introduces a sphere initialized to the diametral sphere of 
the circle. 
*/ 
Kernel::Sphere_3 operator()( const Kernel::Circle_3 &c); 


}; /* end Kernel::ConstructSphere_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Triangle_3<Kernel>` 

*/
class ConstructSupportingPlane_3 {
public:


/*! 
returns the supporting plane of \f$ t\f$, with same orientation. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Triangle_3& t); 


}; /* end Kernel::ConstructSupportingPlane_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 

*/
class ConstructMaxVertex_2 {
public:


/*! 
returns the vertex of 
`r` with lexicographically largest coordinates. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Iso_rectangle_2 &r); 

/*! 
returns the vertex of 
`s` with lexicographically largest coordinates. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Segment_2 &s); 


}; /* end Kernel::ConstructMaxVertex_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeYmax_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the largest \f$ y\f$-coordinate of the iso-rectangle. 
*/ 
Kernel::FT operator()(const Kernel::Iso_rectangle_2& r) const; 

/// @}

}; /* end Kernel::ComputeYmax_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::x_equal` 

*/
class EqualX_2 {
public:


/*! 
returns true iff \f$ p\f$ and \f$ q\f$ have the same Cartesian \f$ x\f$-coordinate. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 


}; /* end Kernel::EqualX_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

for all pairs `Type1` and `Type2`, where 
the types `Type1` and `Type2` can be any of the 
following: 

- `Kernel::Point_2` 
- `Kernel::Line_2` 
- `Kernel::Ray_2` 
- `Kernel::Segment_2` 
- `Kernel::Triangle_2` 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::squared_distance` 

*/
class ComputeSquaredDistance_2 {
public:


/*! 
returns the squared distance between two geometrical objects of type 
`Type1` and `Type2` 
*/ 
Kernel::FT operator()(Type1 obj1, Type2 obj2); 


}; /* end Kernel::ComputeSquaredDistance_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::are_strictly_ordered_along_line` 

*/
class AreStrictlyOrderedAlongLine_3 {
public:


/*! 
returns `true`, iff the three points are collinear and 
`q` lies strictly between `p` and `r`. 
Note that `false` is returned, if `q==p` or 
`q==r`. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 


}; /* end Kernel::AreStrictlyOrderedAlongLine_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Segment_3<Kernel>` 

*/
class ConstructMinVertex_3 {
public:


/*! 
returns the vertex of 
`c` with lexicographically smallest coordinates. 
*/ 
Kernel::Point_3 operator()(const 
Kernel::Iso_cuboid_3 &c); 

/*! 
returns the vertex of 
`s` with lexicographically smallest coordinates. 
*/ 
Kernel::Point_3 operator()(const 
Kernel::Segment_3 &s); 


}; /* end Kernel::ConstructMinVertex_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide the following operations. For all of 
them `fo``(x,y)` returns true iff \f$ x\f$ and \f$ y\f$ are equal. 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Direction_3<Kernel>` 
\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Line_3<Kernel>` 
\sa `CGAL::Plane_3<Kernel>` 
\sa `CGAL::Point_3<Kernel>` 
\sa `CGAL::Ray_3<Kernel>` 
\sa `CGAL::Segment_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 
\sa `CGAL::Triangle_3<Kernel>` 
\sa `CGAL::Vector_3<Kernel>` 

*/
class Equal_3 {
public:


/*! 

*/ 
bool operator()(const Kernel::Point_3& x, 
const Kernel::Point_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Vector_3& x, 
const Kernel::Vector_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Direction_3& x, 
const Kernel::Direction_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Line_3& x, 
const Kernel::Line_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Plane_3& x, 
const Kernel::Plane_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Ray_3& x, 
const Kernel::Ray_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Segment_3& x, 
const Kernel::Segment_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Circle_3& x, 
const Kernel::Circle_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Sphere_3& x, 
const Kernel::Sphere_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Triangle_3& x, 
const Kernel::Triangle_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Tetrahedron_3& x, 
const Kernel::Tetrahedron_3& y); 

/*! 

*/ 
bool operator()(const Kernel::Iso_cuboid_3& x, 
const Kernel::Iso_cuboid_3& y); 


}; /* end Kernel::Equal_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Plane_3<Kernel>` 

*/
class ConstructOppositePlane_3 {
public:


/*! 
returns the plane representing the same set of points as \f$ p\f$, 
but with opposite orientation. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Plane_3& p); 


}; /* end Kernel::ConstructOppositePlane_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::has_smaller_distance_to_point` 

*/
class LessDistanceToPoint_3 {
public:


/*! 
returns true iff the distance of \f$ q\f$ to \f$ p\f$ is 
smaller than the distance of \f$ r\f$ to \f$ p\f$. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 


}; /* end Kernel::LessDistanceToPoint_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\image html compare2.gif

\refines ::AdaptableFunctor (with three arguments) 

\anchor fig-compare2
\sa `CGAL::compare_y_at_x` 

*/
class CompareYAtX_2 {
public:


/*! 
compares the \f$ y\f$-coordinates of \f$ p\f$ and the vertical projection 
of `p` on `h`. See Figure \ref fig-compare2 (e).
\pre `h` is not vertical. 
*/ 
Comparison_result operator()(const Kernel::Point_2 &p, 
const Kernel::Line_2 &h); 

/*! 
This function compares the \f$ y\f$-coordinates of the vertical projection 
of `p` on `h1` and on `h2`. See Figure \ref fig-compare2 (e).
\pre `h1` and `h2` are not vertical. 
*/ 
Comparison_result operator()(const Kernel::Point_2 &p, 
const Kernel::Line_2 &h1, 
const Kernel::Line_2 &h2); 

/*! 
Let \f$ p\f$ be the intersection of lines \f$ l1\f$ and \f$ l2\f$. 
This function compares the \f$ y\f$-coordinates of \f$ p\f$ and 
the vertical projection of `p` on `h`.
See (Figure \ref fig-compare2 (f)).
\pre `l1`, `l2` intersect and `h` is not vertical. 

*/ 
Comparison_result operator()(const Kernel::Line_2 &l1, 
const Kernel::Line_2 &l2, 
const Kernel::Line_2 &h); 

/*! 
Let \f$ p\f$ be the intersection of lines \f$ l1\f$ and \f$ l2\f$. This function 
compares the \f$ y\f$-coordinates of the vertical projection of `p` on 
`h1` and on `h2`.
See (Figure \ref fig-compare2 (g)).
\pre `l1` and `l2` intersect; `h1` and `h2` are not vertical. 

*/ 
Comparison_result operator()(const Kernel::Line_2 &l1, 
const Kernel::Line_2 &l2, 
const Kernel::Line_2 &h1, 
const Kernel::Line_2 &h2); 

/*! 
compares the \f$ y\f$-coordinates of \f$ p\f$ and the vertical projection 
of `p` on `s`. If `s` is vertical, then return 
`EQUAL` when `p` lies on `s`, `SMALLER` when `p` lies 
under s, and `LARGER` otherwise. 

\pre `p` is within the x range of `s`. 
*/ 
Comparison_result operator()(const Kernel::Point_2 &p, 
const Kernel::Segment_2 &s); 

/*! 
This function compares the \f$ y\f$-coordinates of the vertical projection 
of `p` on `s1` and on `s2`. If `s1` or `s2` 
is vertical, then return `EQUAL` if they intersect, otherwise return 
`SMALLER` if `s1` lies below `s2`, and return `LARGER` 
otherwise. 

\pre `p` is within the x range of `s1` and `s2`. 
*/ 
Comparison_result operator()(const Kernel::Point_2 &p, 
const Kernel::Segment_2 &s1, 
const Kernel::Segment_2 &s2); 

}; /* end Kernel::CompareYAtX_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeDy_2 {
public:

/// \name Refines 
/// @{

/*! 
returns an \f$ y\f$-coordinate of the direction. 
*/ 
Kernel::FT operator()(const Kernel::Direction_2& v) const; 

/// @}

}; /* end Kernel::ComputeDy_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

for all pairs `Type1` and `Type2`, where 
the types `Type1` and `Type2` can be any of the 
following: 

- `Kernel::Point_2` 
- `Kernel::Line_2` 
- `Kernel::Ray_2` 
- `Kernel::Segment_2` 
- `Kernel::Triangle_2` 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::compare_distance_to_point` 
\sa `CGAL::compare_squared_distance` 

*/
class CompareSquaredDistance_2 {
public:


/*! 
compares the squared distance between the two geometrical objects 
`obj1` and `obj2` to the value `d2` 
*/ 
Comparison_result operator()(const Type1& obj1, 
const Type2& obj2, 
const Kernel::FT&d2); 


}; /* end Kernel::CompareSquaredDistance_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Triangle_3<Kernel>` 

*/
class ComputeSquaredArea_3 {
public:


/*! 
returns the square of the area of \f$ t\f$. 
*/ 
Kernel::FT operator()(const Kernel::Triangle_3& t); 

/*! 
returns the square of the area of the triangle `p`, `q`, `r`. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q, 
const Kernel::Point_3& r); 


}; /* end Kernel::ComputeSquaredArea_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::x_equal` 

*/
class EqualX_3 {
public:


/*! 
returns true iff \f$ p\f$ and \f$ q\f$ have the same Cartesian \f$ x\f$-coordinate. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::EqualX_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Direction_3<Kernel>` 

*/
class ConstructDirection_3 {
public:


/*! 
introduces a direction initialized with the 
direction of vector \f$ v\f$. 
*/ 
Kernel::Direction_3 operator()(const Kernel::Vector_3 &v); 

/*! 
introduces the direction of line \f$ l\f$. 
*/ 
Kernel::Direction_3 operator()(const Kernel::Line_3 &l); 

/*! 
introduces the direction of ray \f$ r\f$. 
*/ 
Kernel::Direction_3 operator()(const Kernel::Ray_3 &r); 

/*! 
introduces the direction of segment \f$ s\f$. 
*/ 
Kernel::Direction_3 operator()(const Kernel::Segment_3 &s); 


}; /* end Kernel::ConstructDirection_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `Kernel::ConstructBarycenter_3` 
\sa `CGAL::centroid` 
\sa `CGAL::barycenter` 

*/
class ConstructCentroid_3 {
public:


/*! 
compute the centroid of the points \f$ p\f$, \f$ q\f$, and \f$ r\f$. 
*/ 
Kernel::Point_3 operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 

/*! 
compute the centroid of the points \f$ p\f$, \f$ q\f$, \f$ r\f$ and \f$ s\f$. 
*/ 
Kernel::Point_3 operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s); 

/*! 
compute the centroid of the triangle \f$ t\f$. 
*/ 
Kernel::Point_3 operator()(const Kernel::Triangle_3&t); 

/*! 
compute the centroid of the tetrahedron \f$ t\f$. 
*/ 
Kernel::Point_3 operator()(const Kernel::Tetrahedron_3&t); 


}; /* end Kernel::ConstructCentroid_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Ray_3<Kernel>` 

*/
class ConstructRay_3 {
public:


/*! 
introduces a ray 
with source \f$ p\f$ and passing through point \f$ q\f$. 
*/ 
Kernel::Ray_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Point_3 &q); 

/*! 
introduces a ray with source \f$ p\f$ and with 
the direction given by \f$ v\f$. 
*/ 
Kernel::Ray_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Vector_3 &v); 

/*! 
introduces a ray with source \f$ p\f$ and with 
direction \f$ d\f$. 
*/ 
Kernel::Ray_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Direction_3 &d); 

/*! 
introduces a ray with source \f$ p\f$ and with 
the same direction as \f$ l\f$. 
*/ 
Kernel::Ray_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Line_3 &l); 


}; /* end Kernel::ConstructRay_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Segment_3<Kernel>` 

*/
class ConstructSegment_3 {
public:


/*! 
introduces a segment with source \f$ p\f$ 
and target \f$ q\f$. It is directed from the source towards 
the target. 
*/ 
Kernel::Segment_3 operator()(const Kernel::Point_3 &p, const Kernel::Point_3 &q); 


}; /* end Kernel::ConstructSegment_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Circle_3<Kernel>` 

*/
class ComputeApproximateSquaredLength_3 {
public:


/*! 
returns an approximation of the squared length (i.e. perimeter) of \f$ c\f$. 
*/ 
double operator()(const Kernel::Circle_3& c); 


}; /* end Kernel::ComputeApproximateSquaredLength_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_2<Kernel>` 
\sa `CGAL::determinant` 

*/
class ComputeDeterminant_2 {
public:


/*! 
returns the determinant of the two vectors \f$ v\f$ and \f$ w\f$. 
*/ 
Kernel::FT operator()(const Kernel::Vector_2& v, 
const Kernel::Vector_2& w); 


}; /* end Kernel::ComputeDeterminant_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Ray_2<Kernel>` 

*/
class ConstructRay_2 {
public:


/*! 
introduces a ray 
with source \f$ p\f$ and passing through point \f$ q\f$. 
*/ 
Kernel::Ray_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Point_2 &q); 

/*! 
introduces a ray starting at source \f$ p\f$ with 
the direction given by \f$ v\f$. 
*/ 
Kernel::Ray_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Vector_2 &v); 

/*! 
introduces a ray starting at source \f$ p\f$ with 
direction \f$ d\f$. 
*/ 
Kernel::Ray_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Direction_2 &d); 

/*! 
introduces a ray starting at source \f$ p\f$ with 
the same direction as \f$ l\f$. 
*/ 
Kernel::Ray_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Line_2 &l); 


}; /* end Kernel::ConstructRay_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::collinear` 

*/
class Collinear_2 {
public:


/*! 
returns `true`, if \f$ p\f$, \f$ q\f$, and \f$ r\f$ are collinear. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 


}; /* end Kernel::Collinear_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::left_turn` 

*/
class LeftTurn_2 {
public:


/*! 
returns `true`, iff the three points `p`, `q` 
and `r` form a left turn. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 


}; /* end Kernel::LeftTurn_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 
\sa `CGAL::Iso_rectangle_2<Kernel>` 

*/
class BoundedSide_2 {
public:


/*! 
returns either `ON_UNBOUNDED_SIDE`, 
`ON_BOUNDED_SIDE`, or the constant 
`ON_BOUNDARY`, depending on where point `p` is relative to 
circle `c`. 
*/ 
Bounded_side operator()(const Kernel::Circle_2&c, 
const Kernel::Point_2&p); 

/*! 
returns either `ON_UNBOUNDED_SIDE`, 
`ON_BOUNDED_SIDE`, or the constant 
`ON_BOUNDARY`, depending on where point `p` is relative to 
triangle `t`. 
*/ 
Bounded_side operator()(const Kernel::Triangle_2& t, 
const Kernel::Point_2&p); 

/*! 
returns either `ON_UNBOUNDED_SIDE`, 
`ON_BOUNDED_SIDE`, or the constant 
`ON_BOUNDARY`, depending on where point `p` is relative to 
rectangle `r`. 
*/ 
Bounded_side operator()(const Kernel::Iso_rectangle_2& r, 
const Kernel::Point_2&p); 


}; /* end Kernel::BoundedSide_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines AdaptableFunctor

\sa `CGAL::bisector` 

*/
class ConstructBisector_2 {
public:

/*! 
constructs the bisector of \f$ p\f$ and \f$ q\f$. 
The bisector is oriented in such a way that `p` lies on its 
positive side. \pre `p` and `q` are not equal. 
*/ 
Kernel::Line_2 operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q ); 

/*! 
constructs the bisector of the two lines \f$ l1\f$ and \f$ l2\f$. 
In the general case, the bisector has the direction of the vector which 
is the sum of the normalized directions of the two lines, and which passes 
through the intersection of `l1` and `l2`. 
If `l1` and `l2` are parallel, then the bisector is defined as the line 
which has the same direction as `l1`, and which is at the same distance 
from `l1` and `l2`. 
This function requires that `Kernel::RT` supports the `sqrt()` 
operation. 
*/ 
Kernel::Line_2 operator()(const Kernel::Line_2&l1, 
const Kernel::Line_2&l2); 

}; /* end Kernel::ConstructBisector_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\sa `CGAL::Circle_3<Kernel>` 

\refines AdaptableFunctor

*/
class ComputeApproximateArea_3 {
public:

/*! 
returns an approximation of the area of \f$ c\f$. 
*/ 
double operator()(const Kernel::Circle_3& c); 

}; /* end Kernel::ComputeApproximateArea_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

for all tuples of types `Type1`, `Type2`, `Type3` 
and `Type4` in the following set of types: 

- `Kernel::Point_3` 
- `Kernel::Line_3` 
- `Kernel::Ray_3` 
- `Kernel::Segment_3` 
- `Kernel::Plane_3` 

\refines ::AdaptableFunctor (with three arguments) 

\sa `Kernel::CompareSquaredDistance_3` 
\sa `CGAL::compare_distance_to_point` 
\sa `CGAL::compare_squared_distance` 

*/
class CompareDistance_3 {
public:


/*! 
compares the squared distance between `obj1` and `obj2` to 
the squared distance between `obj1` and `obj3` 
*/ 
Comparison_result operator()(const Type1& obj1, 
const Type2& obj2, 
const Type3& obj3); 

/*! 
compares the squared distance between `obj1` and `obj2` to 
the squared distance between `obj3` and `obj4` 
*/ 
Comparison_result operator()(const Type1& obj1, 
const Type2& obj2, 
const Type3& obj3, 
const Type4& obj4); 


}; /* end Kernel::CompareDistance_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_xy` 

*/
class CompareXY_3 {
public:


/*! 
Compares the Cartesian coordinates of points `p` and 
`q` lexicographically in \f$ xy\f$ order: first 
\f$ x\f$-coordinates are compared, if they are equal, \f$ y\f$-coordinates 
are compared. 
*/ 
Comparison_result operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::CompareXY_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Triangle_3<Kernel>` 

*/
class ComputeArea_3 {
public:


/*! 
returns the area of \f$ t\f$. This requires that `Kernel::FT` 
supports the `sqrt` operation. 
*/ 
Kernel::FT operator()(const Kernel::Triangle_3& t); 

/*! 
returns the area of the triangle `p`, `q`, `r`. 
This requires that `Kernel::FT` supports the `sqrt` operation. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q, 
const Kernel::Point_3& r); 


}; /* end Kernel::ComputeArea_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

*/
class ConstructBbox_3 {
public:

/// \name Refines 
/// @{

/*! 
returns a bounding box of `c`. 
*/ 
CGAL::Bbox_3 operator()(const Kernel::Circle_3 
&c); 

/*! 
returns a bounding box of `p`. 
*/ 
CGAL::Bbox_3 operator()(const Kernel::Point_3 
&p); 

/*! 
returns a bounding box of `s`. 
*/ 
CGAL::Bbox_3 operator()(const Kernel::Segment_3 
&s); 

/*! 
returns a bounding box of `t`. 
*/ 
CGAL::Bbox_3 operator()(const Kernel::Triangle_3 
&t); 

/*! 
returns a bounding box of `t`. 
*/ 
CGAL::Bbox_3 operator()(const Kernel::Tetrahedron_3 
&t); 

/*! 
returns a bounding box of `i`. 
*/ 
CGAL::Bbox_3 operator()(const Kernel::Iso_Cuboid_3 
&i); 

/*! 
returns a bounding box of `s`. 
*/ 
CGAL::Bbox_3 operator()(const Kernel::Sphere_3 
&s); 

/// @}

}; /* end Kernel::ConstructBbox_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_slopes` 

*/
class CompareSlope_2 {
public:


/*! 
compares the slopes of the lines `l1` and `l2` 
*/ 
Comparison_result operator()(const Kernel::Line_2& l1, 
const Kernel::Line_2& l2); 

/*! 
compares the slopes of the segments `s1` and `s2` 
*/ 
Comparison_result operator()(const Kernel::Segment_2& s1, 
const Kernel::Segment_2& s2); 


}; /* end Kernel::CompareSlope_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_xy` 

*/
class EqualXY_3 {
public:


/*! 
returns true iff \f$ p\f$ and \f$ q\f$ have the same Cartesian \f$ x\f$-coordinate 
and the same Cartesian \f$ y\f$-coordinate. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::EqualXY_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `Kernel::ConstructCentroid_2` 
\sa `CGAL::centroid` 
\sa `CGAL::barycenter` 

*/
class ConstructBarycenter_2 {
public:


/*! 
compute the barycenter of the points \f$ p1\f$ and \f$ p2\f$ with corresponding 
weights \f$ w1\f$ and \f$ 1-w1\f$. 
*/ 
Kernel::Point_2 
operator()( const Kernel::Point_2& p1, const Kernel::FT&w1, 
const Kernel::Point_2& p2); 

/*! 
compute the barycenter of the points \f$ p1\f$ and \f$ p2\f$ with corresponding 
weights \f$ w1\f$ and \f$ w2\f$. \pre w1+w2 != 0. 
*/ 
Kernel::Point_2 
operator()( const Kernel::Point_2& p1, const Kernel::FT&w1, 
const Kernel::Point_2& p2, const Kernel::FT&w2); 

/*! 
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$ and \f$ p3\f$ with corresponding 
weights \f$ w1\f$, \f$ w2\f$ and \f$ 1-w1-w2\f$. 
*/ 
Kernel::Point_2 
operator()( const Kernel::Point_2& p1, const Kernel::FT&w1, 
const Kernel::Point_2& p2, const Kernel::FT&w2, 
const Kernel::Point_2& p3); 

/*! 
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$ and \f$ p3\f$ with corresponding 
weights \f$ w1\f$, \f$ w2\f$ and \f$ w3\f$. \pre w1+w2+w3 != 0. 
*/ 
Kernel::Point_2 
operator()( const Kernel::Point_2& p1, const Kernel::FT&w1, 
const Kernel::Point_2& p2, const Kernel::FT&w2, 
const Kernel::Point_2& p3, const Kernel::FT&w3); 

/*! 
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$, \f$ p3\f$ and \f$ p4\f$ with corresponding 
weights \f$ w1\f$, \f$ w2\f$, \f$ w3\f$ and \f$ 1-w1-w2-w3\f$. 
*/ 
Kernel::Point_2 
operator()( const Kernel::Point_2& p1, const Kernel::FT&w1, 
const Kernel::Point_2& p2, const Kernel::FT&w2, 
const Kernel::Point_2& p3, const Kernel::FT&w3, 
const Kernel::Point_2& p4); 

/*! 
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$, \f$ p3\f$ and \f$ p4\f$ with corresponding 
weights \f$ w1\f$, \f$ w2\f$, \f$ w3\f$ and \f$ w4\f$. \pre w1+w2+w3+w4 != 0. 
*/ 
Kernel::Point_2 
operator()( const Kernel::Point_2& p1, const Kernel::FT&w1, 
const Kernel::Point_2& p2, const Kernel::FT&w2, 
const Kernel::Point_2& p3, const Kernel::FT&w3, 
const Kernel::Point_2& p4, const Kernel::FT&w4); 


}; /* end Kernel::ConstructBarycenter_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Line_2<Kernel>` 

*/
class ConstructPerpendicularLine_2 {
public:


/*! 
returns the line perpendicular to \f$ l\f$ and passing through \f$ p\f$, 
where the direction is the direction of \f$ l\f$ rotated 
counterclockwise by 90 degrees. 
*/ 
Kernel::Line_2 operator()(const Kernel::Line_2& l, 
const Kernel::Point_2& p); 


}; /* end Kernel::ConstructPerpendicularLine_2 */

/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeY_3 {
public:

/// \name Refines 
/// @{

/*! 
returns the \f$ y\f$-coordinate of the point. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p) const; 

/*! 
returns the \f$ y\f$-coordinate of the vector. 
*/ 
Kernel::FT operator()(const Kernel::Vector_3& v) const; 

/// @}

}; /* end Kernel::ComputeY_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide 

for all pairs `Type1` and `Type2`, where 
the types `Type1` and `Type2` can be any of the 
following: 

- `Kernel::Point_2` 
- `Kernel::Line_2` 
- `Kernel::Ray_2` 
- `Kernel::Segment_2` 
- `Kernel::Triangle_2` 
- `Kernel::Iso_rectangle_2` 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::do_intersect` 

*/
class DoIntersect_2 {
public:


/*! 
determines if two geometrical objects of type 
`Type1` and `Type2` intersect or not 
*/ 
bool operator()(Type1 obj1, Type2 obj2); 


}; /* end Kernel::DoIntersect_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_yx` 

*/
class LessYX_2 {
public:


/*! 
returns true iff the \f$ y\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ y\f$-coordinate of \f$ q\f$ or if the are the same and 
the \f$ x\f$-coordinate of \f$ p\f$ is smaller than the \f$ x\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 


}; /* end Kernel::LessYX_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class ConstructVertex_2 {
public:


/*! 
returns source or target of `s`: `fo``(s,0)` 
returns the source of `s`, `fo``(s,1)` returns the target 
of `s`. The parameter `i` is taken modulo 2. 
*/ 
Kernel::Point_2 operator()(const Kernel::Segment_2 
&s, int i); 

/*! 
returns the i'th vertex of 
`r` in counterclockwise order, starting with the lower left 
vertex. The parameter `i` is taken modulo 4. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Iso_rectangle_2 &r, int i); 

/*! 
returns the i'th vertex of `t`. The parameter 
`i` is taken modulo 3. 
*/ 
Kernel::Point_2 operator()(const Kernel::Triangle_2 
&t, int i); 


}; /* end Kernel::ConstructVertex_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class OrientedSide_2 {
public:


/*! 
returns `ON_ORIENTED_BOUNDARY`, 
`ON_NEGATIVE_SIDE`, or the constant `ON_POSITIVE_SIDE`, 
depending on the position of \f$ p\f$ relative to the oriented circle \f$ c\f$. 
*/ 
Oriented_side operator()(const Kernel::Circle_2&c, 
const Kernel::Point_2&p); 

/*! 
returns `ON_ORIENTED_BOUNDARY`, 
`ON_NEGATIVE_SIDE`, or the constant `ON_POSITIVE_SIDE`, 
depending on the position of \f$ p\f$ relative to the oriented line \f$ l\f$. 
*/ 
Oriented_side operator()(const Kernel::Line_2&l, 
const Kernel::Point_2&p); 

/*! 
returns `ON_ORIENTED_BOUNDARY`, 
`ON_NEGATIVE_SIDE`, or the constant `ON_POSITIVE_SIDE`, 
depending on the position of \f$ p\f$ relative to the oriented triangle \f$ t\f$. 
*/ 
Oriented_side operator()(const Kernel::Triangle_2&t, 
const Kernel::Point_2&p); 


}; /* end Kernel::OrientedSide_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::side_of_bounded_circle` 

*/
class SideOfBoundedCircle_2 {
public:


/*! 
returns the relative position of point `t` 
to the circle defined by \f$ p\f$, \f$ q\f$ and \f$ r\f$. The order 
of the points \f$ p\f$, \f$ q\f$ and \f$ r\f$ does not matter. 
\pre `p, q` and `r` are not collinear. 
*/ 
Bounded_side operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r, 
const Kernel::Point_2&t); 

/*! 
returns the position of the point `t` relative to the circle 
that has \f$ pq\f$ as its diameter. 
*/ 
Bounded_side operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&t); 


}; /* end Kernel::SideOfBoundedCircle_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_2<Kernel>` 
\sa `Kernel::ConstructScaledVector_2` 

*/
class ConstructVector_2 {
public:


/*! 
introduces the vector \f$ b-a\f$. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Point_2 &a, 
const Kernel::Point_2 &b); 

/*! 
introduces the vector \f$ b\f$. 
*/ 
Kernel::Vector_2 operator()(const Origin &o, 
const Kernel::Point_2 &b); 

/*! 
introduces the vector \f$ -a\f$. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Point_2 &a, 
const Origin &o); 

/*! 
introduces the vector \f$ s.target()-s.source()\f$. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Segment_2 &s); 

/*! 
introduces a vector having the same direction as \f$ r\f$. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Ray_2 &r); 

/*! 
introduces a vector having the same direction as \f$ l\f$. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Line_2 &l); 

/*! 
introduces a null vector . 
*/ 
Kernel::Vector_2 operator()(const Null_vector &NULL_VECTOR); 


}; /* end Kernel::ConstructVector_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Point_2<Kernel>` 

*/
class ConstructPoint_2 {
public:


/*! 
introduces a variable with Cartesian coordinates 
\f$ (0,0)\f$. 
*/ 
Kernel::Point_2 operator()(const Origin &ORIGIN); 


}; /* end Kernel::ConstructPoint_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 

*/
class ConstructBaseVector_3 {
public:


/*! 
when `index` == 1, returns a vector `b1` that is orthogonal to the 
normal `n` to plane `h`; when `index` == 2, returns a vector 
`b2` that is orthogonal to `n` and `b1` and such that 
for an arbitrary point `p` on the plane `h`, the orientation of 
`p`, `p + b1`, `p + b2`, and `p + n` is positive. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Plane_3& h, 
int index); 


}; /* end Kernel::ConstructBaseVector_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

*/
class LessRotateCCW_2 {
public:


/*! 
returns true iff the three points `p`, `q` 
and `r` form a left turn or if they are collinear and 
the distance of \f$ q\f$ to \f$ p\f$ is 
larger than the distance of \f$ r\f$ to \f$ p\f$, where \f$ p\f$ is the point 
passed to the object at construction. 
\pre \f$ p\f$ does not lie in the interior of the segment \f$ rq\f$, i.e. \f$ p\f$ is an extreme point with respect to \f$ \{p,q,r\}\f$. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 


}; /* end Kernel::LessRotateCCW_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Vector_3<Kernel>` 

*/
class ConstructOppositeVector_3 {
public:


/*! 
returns the vector `-v`. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Vector_3& v); 


}; /* end Kernel::ConstructOppositeVector_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeA_2 {
public:


/*! 
returns the coefficient `a` of the line with equation `ax +by + c = 0`. 
*/ 
Kernel::FT operator()(const Kernel::Line_2& l) const; 


}; /* end Kernel::ComputeA_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_2<Kernel>` 

*/
class ConstructDifferenceOfVectors_2 {
public:


/*! 
introduces the vector \f$ v1 - v2\f$. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Vector_2 &v1, 
const Kernel::Vector_2 &v2); 


}; /* end Kernel::ConstructDifferenceOfVectors_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Ray_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class IsDegenerate_2 {
public:


/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Circle_2&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Iso_rectangle_2&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Line_2&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Ray_2&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Segment_2&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Triangle_2&o); 


}; /* end Kernel::IsDegenerate_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_x` 

*/
class LessX_2 {
public:


/*! 
returns true iff the \f$ x\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ x\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 


}; /* end Kernel::LessX_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::angle` 

*/
class Angle_3 {
public:


/*! 
returns `OBTUSE`, `RIGHT` or `ACUTE` depending 
on the angle formed by the three points \f$ p\f$, \f$ q\f$, \f$ r\f$ (\f$ q\f$ being the vertex of 
the angle). 
*/ 
Angle operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 


}; /* end Kernel::Angle_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Ray_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 

*/
class HasOn_2 {
public:


/*! 
returns true iff \f$ p\f$ lies on \f$ l\f$. 
*/ 
bool operator()(const Kernel::Line_2&l, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on \f$ r\f$. 
*/ 
bool operator()(const Kernel::Ray_2&r, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on \f$ s\f$. 
*/ 
bool operator()(const Kernel::Segment_2&s, 
const Kernel::Point_2&p); 


}; /* end Kernel::HasOn_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeDx_2 {
public:


/*! 
returns an \f$ x\f$-coordinate of the direction. 
*/ 
Kernel::FT operator()(const Kernel::Direction_2& v) const; 


}; /* end Kernel::ComputeDx_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::Circle_3<Kernel>` 

*/
class ConstructCircle_3 {
public:


/*! 
introduces a variable of type `Kernel::Circle_3`. 
It is initialized to the circle with center `center`, 
and squared radius `sq_r` in the plane `plane`. 
\pre `center` lies in `plane` and 		`sq_r` \f$ \geq\f$ 0. 
*/ 
Kernel::Circle_3 operator() 
( Kernel::Point_3 const& center, 
Kernel::FT const& sq_r, 
Kernel::Plane_3 const& plane); 

/*! 
introduces a variable of type `Kernel::Circle_3`. 
It is initialized to the circle with center `center`, 
and squared radius `sq_r` in the plane 
containing `center` and normal to `n`. 
\pre `sq_r` \f$ \geq\f$ 0. 
*/ 
Kernel::Circle_3 operator() 
( Kernel::Point_3 const& center, 
Kernel::FT const& sq_r, 
Kernel::Vector_3 const& n); 

/*! 
introduces a variable of type `Kernel::Point_3`. 
It is initialized to the circle passing through the three points. 
\pre The three points are not collinear. 
*/ 
Kernel::Circle_3 operator() 
( Kernel::Point_3 const& p, 
Kernel::Point_3 const& q, 
Kernel::Point_3 const& r); 

/*! 
introduces a variable of type `Kernel::Circle_3`. 
It is initialized to the circle along which the two spheres intersect. 
\pre The two spheres intersect along a circle. 
*/ 
Kernel::Circle_3 operator() 
( Kernel::Sphere_3 const& sphere1, 
Kernel::Sphere_3 const& sphere2); 

/*! 
introduces a variable of type `Kernel::Circle_3`. 
It is initialized to the circle along which the sphere and the 
plane intersect. 
\pre The sphere and the plane intersect along a circle. 
*/ 
Kernel::Circle_3 operator() 
( Kernel::Sphere_3 const& sphere, 
Kernel::Plane_3 const& plane); 

/*! 
introduces a variable of type `Kernel::Circle_3`. 
It is initialized to the circle along which the sphere and the 
plane intersect. 
\pre The sphere and the plane intersect along a circle. 
*/ 
Kernel::Circle_3 operator() 
( Kernel::Plane_3 const& plane, 
Kernel::Sphere_3 const& sphere); 


}; /* end Kernel::ConstructCircle_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Object` 
\sa `Kernel::Object_3` 
\sa `Kernel::Intersect_3` 

*/
class Assign_3 {
public:


/*! 
assigns `o` to `t` if `o` 
was constructed from an object of type `T`. 
Returns `true`, if the assignment was possible. 
*/ 
template <class T> 
bool operator()(T& t, const Kernel::Object_3&o); 


}; /* end Kernel::Assign_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_y` 

*/
class LessY_3 {
public:


/*! 
returns true iff the \f$ y\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ y\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::LessY_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_3<Kernel>` 

*/
class ConstructSumOfVectors_3 {
public:


/*! 
introduces the vector \f$ v1 + v2\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Vector_3 &v1, 
const Kernel::Vector_3 &v2); 


}; /* end Kernel::ConstructSumOfVectors_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::are_ordered_along_line` 

*/
class AreOrderedAlongLine_3 {
public:


/*! 
returns `true`, iff the three points are collinear and 
`q` lies between `p` and `r`. 
Note that `true` is returned, if `q==p` or 
`q==r`. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 


}; /* end Kernel::AreOrderedAlongLine_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::parallel` 

*/
class AreParallel_2 {
public:


/*! 
returns `true`, if `l1` and `l2` are parallel or if one 
of those (or both) is degenerate. 
*/ 
bool operator()(const Kernel::Line_2&l1, 
const Kernel::Line_2&l2); 

/*! 
returns `true`, if `r1` and `r2` are parallel or if one 
of those (or both) is degenerate. 
*/ 
bool operator()(const Kernel::Ray_2&r1, 
const Kernel::Ray_2&r2); 

/*! 
returns `true`, if `s1` and `s2` are parallel or if one 
of those (or both) is degenerate. 
*/ 
bool operator()(const Kernel::Segment_2&s1, 
const Kernel::Segment_2&s2); 


}; /* end Kernel::AreParallel_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_3<Kernel>` 
\sa `CGAL::Line_3<Kernel>` 
\sa `CGAL::Plane_3<Kernel>` 
\sa `CGAL::Point_3<Kernel>` 
\sa `CGAL::Ray_3<Kernel>` 
\sa `CGAL::Segment_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Triangle_3<Kernel>` 

*/
class HasOn_3 {
public:


/*! 
returns true iff \f$ p\f$ lies on \f$ c\f$. 
*/ 
bool operator()(const Kernel::Circle_3&c, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on \f$ l\f$. 
*/ 
bool operator()(const Kernel::Line_3&l, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on \f$ r\f$. 
*/ 
bool operator()(const Kernel::Ray_3&r, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on \f$ s\f$. 
*/ 
bool operator()(const Kernel::Segment_3&s, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on \f$ pl\f$. 
*/ 
bool operator()(const Kernel::Plane_3&pl, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ l\f$ lies on \f$ pl\f$. 
*/ 
bool operator()(const Kernel::Plane_3&pl, 
const Kernel::Line_3&l); 

/*! 
returns true iff \f$ c\f$ lies on \f$ pl\f$. 
*/ 
bool operator()(const Kernel::Plane_3&pl, 
const Kernel::Circle_3&c); 

/*! 
returns true iff \f$ c\f$ lies on \f$ s\f$. 
*/ 
bool operator()(const Kernel::Sphere_3&s, 
const Kernel::Point_3&c); 

/*! 
returns true iff \f$ c\f$ lies on \f$ s\f$. 
*/ 
bool operator()(const Kernel::Sphere_3&s, 
const Kernel::Circle_3&c); 

/*! 
returns true iff \f$ p\f$ lies on \f$ t\f$. 
*/ 
bool operator()(const Kernel::Triangle_3&t, 
const Kernel::Point_3&p); 


}; /* end Kernel::HasOn_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class ConstructTetrahedron_3 {
public:
/*! 
introduces a tetrahedron with vertices \f$ p_0\f$, \f$ p_1\f$, \f$ p_2\f$ and \f$ p_3\f$. 
*/ 
Kernel::Tetrahedron_3 operator()(const Kernel::Point_3 &p0, 
const Kernel::Point_3 &p1, 
const Kernel::Point_3 &p2, 
const Kernel::Point_3 &p3); 


}; /* end Kernel::ConstructTetrahedron_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\sa `CGAL::compare_y_at_x` 

\refines AdaptableFunctor

*/
class ComputeYAtX_2 {
public:

/*! 
returns the \f$ y\f$-coordinate of the point at \f$ l\f$ with 
given \f$ x\f$-coordinate. 
\pre \f$ l\f$ is not vertical. 
*/ 
Kernel::FT operator()(const Kernel::Line_2& l, 
const Kernel::FT &x) const; 

}; /* end Kernel::ComputeYAtX_2 */




/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class HasOnNegativeSide_2 {
public:


/*! 
returns true iff \f$ p\f$ lies on the negative side of \f$ c\f$. 
*/ 
bool operator()(const Kernel::Circle_2&c, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the negative side of \f$ l\f$ 
(\f$ l\f$ is considered a half-space). 
*/ 
bool operator()(const Kernel::Line_2&l, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the negative side of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Triangle_2&t, 
const Kernel::Point_2&p); 


}; /* end Kernel::HasOnNegativeSide_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

for all pairs `Type1` and `Type2`, where 
the types `Type1` and `Type2` can be any of the 
following: 

- `Kernel::Point_3` 
- `Kernel::Line_3` 
- `Kernel::Ray_3` 
- `Kernel::Segment_3` 
- `Kernel::Plane_3` 


\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::squared_distance` 

*/
class ComputeSquaredDistance_3 {
public:


/*! 
returns the squared distance between two geometrical objects of type 
`Type1` and `Type2` 
*/ 
Kernel::FT operator()(Type1 obj1, Type2 obj2); 


}; /* end Kernel::ComputeSquaredDistance_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeZ_3 {
public:

/// \name Refines 
/// @{

/*! 
returns the \f$ z\f$-coordinate of the point. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p) const; 

/*! 
returns the \f$ z\f$-coordinate of the vector. 
*/ 
Kernel::FT operator()(const Kernel::Vector_3& v) const; 

/// @}

}; /* end Kernel::ComputeZ_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Line_2<Kernel>` 

*/
class ConstructLine_2 {
public:


/*! 
introduces a line passing through the points \f$ p\f$ and \f$ q\f$. 
Line is directed from \f$ p\f$ to \f$ q\f$. 
*/ 
Kernel::Line_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Point_2 &q); 

/*! 
introduces a line passing through point \f$ p\f$ with 
direction \f$ d\f$. 
*/ 
Kernel::Line_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Direction_2&d); 

/*! 
introduces a line passing through point \f$ p\f$ and 
oriented by \f$ v\f$. 
*/ 
Kernel::Line_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Vector_2&v); 

/*! 
introduces a line supporting the segment \f$ s\f$, 
oriented from source to target. 
*/ 
Kernel::Line_2 operator()(const Kernel::Segment_2 &s); 

/*! 
introduces a line supporting the ray \f$ r\f$, 
with same orientation. 
*/ 
Kernel::Line_2 operator()(const Kernel::Ray_2 &r); 


}; /* end Kernel::ConstructLine_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Circle_3<Kernel>` 
\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Line_3<Kernel>` 
\sa `CGAL::Plane_3<Kernel>` 
\sa `CGAL::Point_3<Kernel>` 
\sa `CGAL::Ray_3<Kernel>` 
\sa `CGAL::Segment_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 
\sa `CGAL::Triangle_3<Kernel>` 

*/
class IsDegenerate_3 {
public:


/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Circle_3&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Iso_cuboid_3&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Line_3&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Plane_3&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Ray_3&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Segment_3&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Sphere_3&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Tetrahedron_3&o); 

/*! 
returns true iff \f$ o\f$ is degenerate. 
*/ 
bool operator()(const Kernel::Triangle_3&o); 


}; /* end Kernel::IsDegenerate_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Segment_2<Kernel>` 

*/
class ConstructTarget_2 {
public:


/*! 
returns the target of 
the segment `s`. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Segment_2 &s); 


}; /* end Kernel::ConstructTarget_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two argument) 

\sa `CGAL::Sphere_3<Kernel>` 

*/
class ConstructRadicalPlane_3 {
public:


/*! 
returns the radical plane of the spheres. 
\pre The two spheres don't have the same center. 
*/ 
Kernel::Plane_3 operator() 
(const Kernel::Sphere_3& sphere1, 
const Kernel::Sphere_3& sphere2); 


}; /* end Kernel::ConstructRadicalPlane_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::are_ordered_along_line` 

*/
class AreOrderedAlongLine_2 {
public:


/*! 
returns `true`, iff the three points are collinear and 
`q` lies between `p` and `r`. 
Note that `true` is returned, if `q==p` or 
`q==r`. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 


}; /* end Kernel::AreOrderedAlongLine_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\anchor fig-compare_x_at_y_2
\image html compare_x_at_y.gif

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::compare_x_at_y` 

*/
class CompareXAtY_2 {
public:


/*! 
compares the \f$ x\f$-coordinates of \f$ p\f$ and the horizontal projection 
of `p` on `h`. See Figure \ref fig-compare_x_at_y_2 (a).

*/ 
Comparison_result operator()(const Kernel::Point_2 &p, 
const Kernel::Line_2 &h); 

/*! 
compares the \f$ x\f$-coordinates of the horizontal projection 
of `p` on `h1` and on `h2`.
See Figure \ref fig-compare_x_at_y_2 (b).

*/ 
Comparison_result operator()(const Kernel::Point_2 &p, 
const Kernel::Line_2 &h1, 
const Kernel::Line_2 &h2); 

/*! 
Let \f$ p\f$ be the intersection of lines \f$ l1\f$ and \f$ l2\f$. 
This function compares the \f$ x\f$-coordinates of \f$ p\f$ and 
the horizontal projection of `p` on `h`.

See Figure \ref fig-compare_x_at_y_2 (c).
*/ 
Comparison_result operator()(const Kernel::Line_2 &l1, 
const Kernel::Line_2 &l2, 
const Kernel::Line_2 &h); 

/*! 
Let \f$ p\f$ be the intersection of lines \f$ l1\f$ and \f$ l2\f$. This 
function compares the \f$ x\f$-coordinates of the horizontal projection of 
`p` on `h1` and on `h2`.

See Figure \ref fig-compare_x_at_y_2 (d)).
*/ 
Comparison_result operator()(const Kernel::Line_2 &l1, 
const Kernel::Line_2 &l2, 
const Kernel::Line_2 &h1, 
const Kernel::Line_2 &h2); 


}; /* end Kernel::CompareXAtY_2 */



/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A type representing an iterator to the Cartesian coordinates of a point 
in two dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `Kernel::ConstructCartesianConstIterator_2` 

*/
class CartesianConstIterator_2 {
public:

/// @}

}; /* end Kernel::CartesianConstIterator_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_yx` 
\sa `Kernel::CompareXY_2` 

*/
class CompareYX_2 {
public:


/*! 
Compares the Cartesian coordinates of points `p` and 
`q` lexicographically in \f$ yx\f$ order: first 
\f$ y\f$-coordinates are compared, if they are equal, \f$ x\f$-coordinates 
are compared. 
*/ 
Comparison_result operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 


}; /* end Kernel::CompareYX_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Point_3<Kernel>` 

*/
class ConstructPoint_3 {
public:


/*! 
introduces a point with Cartesian coordinates\f$ (0,0,0)\f$. 
*/ 
Kernel::Point_3 operator()(const Origin &ORIGIN); 


}; /* end Kernel::ConstructPoint_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class HasOnBoundedSide_2 {
public:


/*! 
returns true iff \f$ p\f$ lies on the bounded side of \f$ c\f$. 
*/ 
bool operator()(const Kernel::Circle_2&c, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the bounded side of \f$ i\f$. 
*/ 
bool operator()(const Kernel::Iso_rectangle_2&i, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the bounded side of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Triangle_2&t, 
const Kernel::Point_2&p); 


}; /* end Kernel::HasOnBoundedSide_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Vector_2<Kernel>` 

*/
class ConstructOppositeVector_2 {
public:


/*! 
returns the vector `-v`. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Vector_2& v); 


}; /* end Kernel::ConstructOppositeVector_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::collinear_are_ordered_along_line` 

*/
class CollinearAreOrderedAlongLine_3 {
public:


/*! 
returns `true`, iff `q` lies between `p` 
and `r`. \pre `p, q` and `r` are collinear. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 


}; /* end Kernel::CollinearAreOrderedAlongLine_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::has_smaller_signed_distance_to_plane` 

*/
class LessSignedDistanceToPlane_3 {
public:


/*! 
returns true, iff the signed distance from point `q` to plane 
`p` is smaller than the signed distance from point `r` to `p`. 
*/ 
bool operator()(const Kernel::Plane_3& p, 
const Kernel::Point_3& q, 
const Kernel::Point_3& r); 

/*! 
returns true, iff the signed distance from point `q` to the plane 
`p` defined by `p1, p2, p3` is smaller than the signed distance 
from point `r` to `p`. 
\pre \f$ p, q\f$, and \f$ r\f$ are not collinear. 
*/ 
bool operator()(const Kernel::Point_3& p1, 
const Kernel::Point_3& p2, 
const Kernel::Point_3& p3, 
const Kernel::Point_3& q, 
const Kernel::Point_3& r); 


}; /* end Kernel::LessSignedDistanceToPlane_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::Triangle_2<Kernel>` 

*/
class ConstructTriangle_2 {
public:


/*! 
introduces a triangle with vertices \f$ p\f$, \f$ q\f$ and \f$ r\f$. 
*/ 
Kernel::Triangle_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Point_2 &q, 
const Kernel::Point_2 &r); 


}; /* end Kernel::ConstructTriangle_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::lexicographically_xyz_smaller` 

*/
class LessXYZ_3 {
public:


/*! 
returns true iff the \f$ x\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ x\f$-coordinate of \f$ q\f$ or if the are the same and 
the \f$ y\f$-coordinate of \f$ p\f$ is smaller than the \f$ y\f$-coordinate of \f$ q\f$, or, 
if both \f$ x\f$- and \f$ y\f$- coordinate are identical and 
the \f$ z\f$-coordinate of \f$ p\f$ is smaller than the \f$ z\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::LessXYZ_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\image html IsoCuboid.gif

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Segment_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 
\sa `CGAL::Triangle_3<Kernel>` 

*/
class ConstructVertex_3 {
public:


/*! 
returns source or target of `s`: `fo``(s,0)` 
returns the source of `s`, `fo``(s,1)` returns the target 
of `s`. The parameter `i` is taken modulo 2. 
*/ 
Kernel::Point_3 operator()(const Kernel::Segment_3 
&s, int i); 

/*! 
returns the i'th vertex of 
`c`, as indicated in the figure below. The parameter `i` is 
taken modulo 8. 

*/ 
Kernel::Point_3 operator()(const 
Kernel::Iso_cuboid_3 &c, int i); 

/*! 
returns the i'th vertex of `t`. The parameter 
`i` is taken modulo 3. 
*/ 
Kernel::Point_3 operator()(const Kernel::Triangle_3 
&t, int i); 

/*! 
returns the i'th vertex of 
`t`. The parameter `i` is taken modulo 4. 
*/ 
Kernel::Point_3 operator()(const 
Kernel::Tetrahedron_3 &t, int i); 


}; /* end Kernel::ConstructVertex_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::collinear` 

*/
class Collinear_3 {
public:


/*! 
returns `true`, if \f$ p\f$, \f$ q\f$, and \f$ r\f$ are collinear. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 


}; /* end Kernel::Collinear_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide 

for all pairs `Type1` and `Type2`, where 
the types `Type1` and 
`Type2` can be any of the following: 

- `Kernel::Plane_3` 
- `Kernel::Line_3` 
- `Kernel::Ray_3` 
- `Kernel::Segment_3` 
- `Kernel::Triangle_3` 
- `Bbox_3` 

and also for `Type1` and `Type2` of respective types 

- `Kernel::Triangle_3` and `Kernel::Tetrahedron_3` 
- `Kernel::Plane_3` and `Kernel::Sphere_3` (or the contrary) 
- `Kernel::Sphere_3` and `Kernel::Sphere_3`. 


\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::do_intersect` 

*/
class DoIntersect_3 {
public:


/*! 
determines if two geometrical objects of type 
`Type1` and `Type2` intersect or not 
*/ 
bool operator()(Type1 obj1, Type2 obj2); 


}; /* end Kernel::DoIntersect_3 */



/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Circle_3<Kernel>` 

*/
class ComputeAreaDividedByPi_3 {
public:


/*! 
returns the area of \f$ c\f$, divided by \f$ \pi\f$. 
*/ 
Kernel::FT operator()(const Kernel::Circle_3& c); 


}; /* end Kernel::ComputeAreaDividedByPi_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

*/
class ConstructBbox_2 {
public:


/*! 
returns a bounding box of `p`. 
*/ 
CGAL::Bbox_2 operator()(const Kernel::Point_2 
&p); 

/*! 
returns a bounding box of `s`. 
*/ 
CGAL::Bbox_2 operator()(const Kernel::Segment_2 
&s); 

/*! 
returns a bounding box of `t`. 
*/ 
CGAL::Bbox_2 operator()(const Kernel::Triangle_2 
&t); 

/*! 
returns a bounding box of `i`. 
*/ 
CGAL::Bbox_2 operator()(const Kernel::Iso_rectangle_2 
&i); 

/*! 
returns a bounding box of `c`. 
*/ 
CGAL::Bbox_2 operator()(const Kernel::Circle_2 
&c); 


}; /* end Kernel::ConstructBbox_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `Kernel::CartesianConstIterator_3` 

*/
class ConstructCartesianConstIterator_3 {
public:


/*! 
returns an iterator on the 0'th Cartesian coordinate of `p`. 
*/ 
Kernel::Cartesian_const_iterator_3 operator()(const Kernel::Point_3 
&p); 

/*! 
returns the past the end iterator of the Cartesian coordinates of `p`. 
*/ 
Kernel::Cartesian_const_iterator_3 operator()(const Kernel::Point_3 
&p, int); 

/*! 
returns an iterator on the 0'th Cartesian coordinate of `v`. 
*/ 
Kernel::Cartesian_const_iterator_3 operator()(const Kernel::Vector_3 
&v); 

/*! 
returns the past the end iterator of the Cartesian coordinates of `v`. 
*/ 
Kernel::Cartesian_const_iterator_3 operator()(const Kernel::Vector_3 
&v, int); 


}; /* end Kernel::ConstructCartesianConstIterator_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide the following operations. For all of 
them `fo``(x,y)` returns true iff \f$ x\f$ and \f$ y\f$ are equal. 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Direction_2<Kernel>` 
\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Point_2<Kernel>` 
\sa `CGAL::Ray_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 
\sa `CGAL::Vector_2<Kernel>` 

*/
class Equal_2 {
public:


/*! 

*/ 
bool operator()(const Kernel::Point_2& x, 
const Kernel::Point_2& y); 

/*! 

*/ 
bool operator()(const Kernel::Vector_2& x, 
const Kernel::Vector_2& y); 

/*! 

*/ 
bool operator()(const Kernel::Direction_2& x, 
const Kernel::Direction_2& y); 

/*! 

*/ 
bool operator()(const Kernel::Line_2& x, 
const Kernel::Line_2& y); 

/*! 

*/ 
bool operator()(const Kernel::Ray_2& x, 
const Kernel::Ray_2& y); 

/*! 

*/ 
bool operator()(const Kernel::Segment_2& x, 
const Kernel::Segment_2& y); 

/*! 

*/ 
bool operator()(const Kernel::Circle_2& x, 
const Kernel::Circle_2& y); 

/*! 

*/ 
bool operator()(const Kernel::Triangle_2& x, 
const Kernel::Triangle_2& y); 

/*! 

*/ 
bool operator()(const Kernel::Iso_rectangle_2& x, 
const Kernel::Iso_rectangle_2& y); 


}; /* end Kernel::Equal_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::cross_product` 
\sa `CGAL::determinant` 

*/
class ConstructCrossProductVector_3 {
public:


/*! 
computes the cross product of \f$ v\f$ and \f$ w\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Vector_3 &v, 
const Kernel::Vector_3 &w); 


}; /* end Kernel::ConstructCrossProductVector_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeC_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the coefficient `c` of the line with equation `ax +by + c = 0`. 
*/ 
Kernel::FT operator()(const Kernel::Line_2& l) const; 

/// @}

}; /* end Kernel::ComputeC_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class HasOnBoundary_3 {
public:


/*! 
returns true iff \f$ p\f$ lies on the boundary of \f$ s\f$. 
*/ 
bool operator()(const Kernel::Sphere_3&s, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the boundary of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Tetrahedron_3&t, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the boundary of \f$ c\f$. 
*/ 
bool operator()(const Kernel::Iso_cuboid_3&c, 
const Kernel::Point_3&p); 


}; /* end Kernel::HasOnBoundary_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class HasOnPositiveSide_2 {
public:


/*! 
returns true iff \f$ p\f$ lies on the positive side of \f$ c\f$. 
*/ 
bool operator()(const Kernel::Circle_2&c, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the positive side of \f$ l\f$ 
(\f$ l\f$ is considered a half-space). 
*/ 
bool operator()(const Kernel::Line_2&l, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the positive side of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Triangle_2&t, 
const Kernel::Point_2&p); 


}; /* end Kernel::HasOnPositiveSide_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Sphere_3<Kernel>` 

*/
class ConstructOppositeSphere_3 {
public:


/*! 
returns the sphere with the same center and squared radius as 
\f$ s\f$, but with opposite orientation. 
*/ 
Kernel::Sphere_3 operator()(const Kernel::Sphere_3& s); 


}; /* end Kernel::ConstructOppositeSphere_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_xy` 
\sa `Kernel::CompareYX_2` 

*/
class CompareXY_2 {
public:


/*! 
Compares the Cartesian coordinates of points `p` and 
`q` lexicographically in \f$ xy\f$ order: first 
\f$ x\f$-coordinates are compared, if they are equal, \f$ y\f$-coordinates 
are compared. 
*/ 
Comparison_result operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 


}; /* end Kernel::CompareXY_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 

*/
class ConstructLiftedPoint_3 {
public:


/*! 
returns a point `q` on plane `h`, such that the projection of 
this point onto the \f$ xy\f$-plane is `p`. 
*/ 
Kernel::Point_3 operator()(const Kernel::Plane_3& h, 
const Kernel::Point_2& p); 


}; /* end Kernel::ConstructLiftedPoint_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_z` 

*/
class LessZ_3 {
public:


/*! 
returns true iff the \f$ z\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ z\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::LessZ_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A type representing an iterator to the Cartesian coordinates of a point 
in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `Kernel::ConstructCartesianConstIterator_3` 

*/
class CartesianConstIterator_3 {
public:

/// @}

}; /* end Kernel::CartesianConstIterator_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::y_equal` 

*/
class EqualY_2 {
public:


/*! 
returns true iff \f$ p\f$ and \f$ q\f$ have the same Cartesian \f$ y\f$-coordinate. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 


}; /* end Kernel::EqualY_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 

*/
class ConstructMinVertex_2 {
public:


/*! 
returns the vertex of 
`r` with lexicographically smallest coordinates. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Iso_rectangle_2 &r); 

/*! 
returns the vertex of 
`s` with lexicographically smallest coordinates. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Segment_2 &s); 


}; /* end Kernel::ConstructMinVertex_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeB_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the coefficient `b` of the line with equation `ax +by + c = 0`. 
*/ 
Kernel::FT operator()(const Kernel::Line_2& l) const; 

/// @}

}; /* end Kernel::ComputeB_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_xyz` 

*/
class CompareXYZ_3 {
public:


/*! 
Compares the Cartesian coordinates of points `p` and 
`q` lexicographically in \f$ xyz\f$ order: first 
\f$ x\f$-coordinates are compared, if they are equal, \f$ y\f$-coordinates 
are compared. If they are equal, \f$ z\f$-coordinates are compared. 
*/ 
Comparison_result operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::CompareXYZ_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Circle_2<Kernel>` 

*/
class ConstructOppositeCircle_2 {
public:


/*! 
returns the circle with the same center and squared radius as 
\f$ c\f$, but with opposite orientation. 
*/ 
Kernel::Circle_2 operator()(const Kernel::Circle_2& c); 


}; /* end Kernel::ConstructOppositeCircle_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class ComputeArea_2 {
public:


/*! 
returns the signed area of the triangle defined by the points \f$ p\f$, 
\f$ q\f$ and \f$ r\f$. 
*/ 
Kernel::FT operator()(const Kernel::Point_2& p, 
const Kernel::Point_2& q, 
const Kernel::Point_2& r); 

/*! 
returns the area of \f$ r\f$. 
*/ 
Kernel::FT operator()(const Kernel::Iso_rectangle_2& r); 

/*! 
returns the signed area of \f$ t\f$. 
*/ 
Kernel::FT operator()(const Kernel::Triangle_2& t); 


}; /* end Kernel::ComputeArea_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `Kernel::ConstructBarycenter_2` 
\sa `CGAL::centroid` 
\sa `CGAL::barycenter` 

*/
class ConstructCentroid_2 {
public:


/*! 
compute the centroid of the points \f$ p\f$, \f$ q\f$, and \f$ r\f$. 
*/ 
Kernel::Point_2 operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 

/*! 
compute the centroid of the points \f$ p\f$, \f$ q\f$, \f$ r\f$ and \f$ s\f$. 
*/ 
Kernel::Point_2 operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r, 
const Kernel::Point_2&s); 

/*! 
compute the centroid of the triangle \f$ t\f$. 
*/ 
Kernel::Point_2 operator()(const Kernel::Triangle_2&t); 


}; /* end Kernel::ConstructCentroid_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_y` 

*/
class CompareY_3 {
public:


/*! 
Compares the Cartesian \f$ y\f$-coordinates of points `p` and 
`q` 
*/ 
Comparison_result operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::CompareY_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide 

for all pairs `Type1` and `Type2`, where 
the types `Type1` and 
`Type2` can be any of the following: 

- `Kernel::Plane_3` 
- `Kernel::Line_3` 
- `Kernel::Ray_3` 
- `Kernel::Segment_3` 
- `Kernel::Triangle_3` 


\refines ::AdaptableFunctor (with two or three arguments) 

\sa `CGAL::intersection` 

*/
class Intersect_3 {
public:


/*! 
computes the intersection region of two geometrical 
objects of type `Type1` and `Type2` 
*/ 
Kernel::Object_3 operator()(Type1 obj1, Type2 obj2); 

/*! 
computes the intersection of two spheres. The result 
can be either a `Kernel::Point_3`, a `Kernel::Circle_3`, a 
`Kernel::Sphere_3` or empty. 
*/ 
Kernel::Object_3 operator()(Kernel::Sphere_3 s1, 
Kernel::Sphere_3 s2); 

/*! 
computes the intersection of a plane and a sphere. The result 
can be either a `Kernel::Point_3`, a `Kernel::Circle_3` or empty. 
*/ 
Kernel::Object_3 operator()(Kernel::Plane_3 p, 
Kernel::Sphere_3 s); 

/*! 
computes the intersection of a plane and a sphere. The result 
can be either a `Kernel::Point_3`, a `Kernel::Circle_3` or empty. 
*/ 
Kernel::Object_3 operator()(Kernel::Sphere_3 s, 
Kernel::Plane_3 p); 

/*! 
computes the intersection of three planes. The result 
can be either a `Kernel::Point_3`, a `Kernel::Line_3`, a 
`Kernel::Plane_3`, or empty. 
*/ 
Kernel::Object_3 operator()(Kernel::Plane_3 pl1, 
Kernel::Plane_3 pl2, 
Kernel::Plane_3 pl3); 


}; /* end Kernel::Intersect_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class HasOnPositiveSide_3 {
public:


/*! 
returns true iff \f$ p\f$ lies on the positive side of \f$ h\f$ 
(\f$ h\f$ is considered a half-space). 
*/ 
bool operator()(const Kernel::Plane_3&h, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the positive side of \f$ s\f$. 
*/ 
bool operator()(const Kernel::Sphere_3&s, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the positive side of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Tetrahedron_3&t, 
const Kernel::Point_3&p); 


}; /* end Kernel::HasOnPositiveSide_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::equidistant_line` 

*/
class ConstructEquidistantLine_3 {
public:


/*! 
constructs the line which is at the same distance from the three points 
`p`, `q` and `r`. 
\pre `p`, `q` and `r` are not collinear. 
*/ 
Kernel::Line_3 operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r ); 


}; /* end Kernel::ConstructEquidistantLine_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeY_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the \f$ y\f$-coordinate of the point. 
*/ 
Kernel::FT operator()(const Kernel::Point_2& p) const; 

/*! 
returns the \f$ y\f$-coordinate of the vector. 
*/ 
Kernel::FT operator()(const Kernel::Vector_2& v) const; 

/// @}

}; /* end Kernel::ComputeY_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 

*/
class ConstructIsoCuboid_3 {
public:


/*! 
introduces an iso-oriented cuboid with diagonal 
opposite vertices \f$ p\f$ and \f$ q\f$ such that \f$ p\f$ is the 
lexicographically smallest point in the cuboid. 
*/ 
Kernel::Iso_cuboid_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Point_3 &q); 

/*! 
introduces an iso-oriented cuboid with diagonal 
opposite vertices \f$ p\f$ and \f$ q\f$. The `int` argument value is 
only used to distinguish the two overloaded functions. 
\pre \f$ p.x()<=q.x()\f$, \f$ p.y()<=q.y()\f$ and \f$ p.z()<=q.z()\f$. 
*/ 
Kernel::Iso_cuboid_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Point_3 &q, 
int); 

/*! 
introduces an iso-oriented cuboid `fo` whose 
minimal \f$ x\f$ coordinate is the one of `left`, the 
maximal \f$ x\f$ coordinate is the one of `right`, the 
minimal \f$ y\f$ coordinate is the one of `bottom`, the 
maximal \f$ y\f$ coordinate is the one of `top`, the 
minimal \f$ z\f$ coordinate is the one of `far`, the 
maximal \f$ z\f$ coordinate is the one of `close`. 
*/ 
Kernel::Iso_cuboid_3 
operator()(const Kernel::Point_3 &left, 
const Kernel::Point_3 &right, 
const Kernel::Point_3 &bottom, 
const Kernel::Point_3 &top, 
const Kernel::Point_3 &far, 
const Kernel::Point_3 &close); 


}; /* end Kernel::ConstructIsoCuboid_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::y_equal` 

*/
class EqualY_3 {
public:


/*! 
returns true iff \f$ p\f$ and \f$ q\f$ have the same Cartesian \f$ y\f$-coordinate. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::EqualY_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\anchor fig-compare12
\image html compare1.gif

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_x` 

*/
class CompareX_2 {
public:


/*! 
compares the Cartesian \f$ x\f$-coordinates of points `p` and `q` 
*/ 
Comparison_result operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 

/*! 
compares the \f$ x\f$-coordinates of \f$ p\f$ and the intersection 
of lines \f$ l1\f$ and \f$ l2\f$.
See Figure \ref fig-compare12 (a).
*/ 
Comparison_result operator()(const Kernel::Point_2 &p, 
const Kernel::Line_2 &l1, 
const Kernel::Line_2 &l2); 

/*! 
compares the \f$ x\f$-coordinates of the intersection of line \f$ l\f$ 
with line \f$ h1\f$ and with line \f$ h2\f$.

See Figure \ref fig-compare12 (b).
*/ 
Comparison_result operator()(const Kernel::Line_2 &l, 
const Kernel::Line_2 &h1, 
const Kernel::Line_2 &h2); 

/*! 
compares the \f$ x\f$-coordinates of the intersection of lines \f$ l1\f$ 
and \f$ l2\f$ and the intersection of lines \f$ h1\f$ and \f$ h2\f$.

See Figure \ref fig-compare12 (c).
*/ 
Comparison_result operator()(const Kernel::Line_2 &l1, 
const Kernel::Line_2 &l2, 
const Kernel::Line_2 &h1, 
const Kernel::Line_2 &h2); 


}; /* end Kernel::CompareX_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Segment_2<Kernel>` 

*/
class ConstructOppositeSegment_2 {
public:


/*! 
returns the segment representing the same set of points as \f$ s\f$, 
but with opposite orientation. 
*/ 
Kernel::Segment_2 operator()(const Kernel::Segment_2& s); 


}; /* end Kernel::ConstructOppositeSegment_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_3<Kernel>` 

*/
class ConstructScaledVector_3 {
public:


/*! 
produces the vector `v` scaled by a factor `scale`. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Vector_3 &v, 
const Kernel::RT& scale); 

/*! 
produces the vector `v` scaled by a factor `scale`. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Vector_3 &v, 
const Kernel::FT& scale); 


}; /* end Kernel::ConstructScaledVector_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class BoundedSide_3 {
public:


/*! 
returns either `ON_UNBOUNDED_SIDE`, 
`ON_BOUNDED_SIDE`, or the constant 
`ON_BOUNDARY`, depending on where point `p` is with 
respect to sphere `s`. 
*/ 
Bounded_side operator()(const Kernel::Sphere_3& s, 
const Kernel::Point_3&p); 

/*! 
returns either `ON_UNBOUNDED_SIDE`, 
`ON_BOUNDED_SIDE`, or the constant 
`ON_BOUNDARY`, depending on where point `p` is with 
respect to tetrahedron `t`. 
*/ 
Bounded_side operator()(const Kernel::Tetrahedron_3& t, 
const Kernel::Point_3&p); 

/*! 
returns either `ON_UNBOUNDED_SIDE`, 
`ON_BOUNDED_SIDE`, or the constant 
`ON_BOUNDARY`, depending on where point `p` is with 
respect to iso-cuboid `c`. 
*/ 
Bounded_side operator()(const Kernel::Iso_cuboid_3& c, 
const Kernel::Point_3&p); 


}; /* end Kernel::BoundedSide_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\sa `CGAL::Vector_2<Kernel>` 

\refines ::AdaptableFunctor (with two arguments)

*/
class ComputeScalarProduct_2 {
public:

/*! 
returns the scalar (inner) product of the two vectors `v` and `w`. 
*/ 
Kernel::FT operator()(const Kernel::Vector_2& v, 
const Kernel::Vector_2& w); 

}; /* end Kernel::ComputeScalarProduct_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Circle_3<Kernel>` 

*/
class ComputeSquaredLengthDividedByPiSquare_3 {
public:


/*! 
returns the squared length of \f$ c\f$, divided by \f$ \pi^2\f$. 
*/ 
Kernel::FT operator()(const Kernel::Circle_3& c); 


}; /* end Kernel::ComputeSquaredLengthDividedByPiSquare_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Direction_2<Kernel>` 

*/
class ConstructPerpendicularDirection_2 {
public:


/*! 
introduces a direction orthogonal to `d`. If `o` is 
`CLOCKWISE`, `d` is rotated clockwise; if `o` is 
`COUNTERCLOCKWISE`, `d` is rotated counterclockwise. 
\pre `o` is not `COLLINEAR`. 
*/ 
Kernel::Direction_2 operator()(const Kernel::Direction_2& d, 
Orientation o); 


}; /* end Kernel::ConstructPerpendicularDirection_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::parallel` 

*/
class AreParallel_3 {
public:


/*! 
returns `true`, if `l1` and `l2` are parallel or if one 
of those (or both) is degenerate. 
*/ 
bool operator()(const Kernel::Line_3&l1, 
const Kernel::Line_3&l2); 

/*! 
returns `true`, if `h1` and `h2` are parallel or if one 
of those (or both) is degenerate. 
*/ 
bool operator()(const Kernel::Plane_3&h1, 
const Kernel::Plane_3&h2); 

/*! 
returns `true`, if `r1` and `r2` are parallel or if one 
of those (or both) is degenerate. 
*/ 
bool operator()(const Kernel::Ray_3&r1, 
const Kernel::Ray_3&r2); 

/*! 
returns `true`, if `s1` and `s2` are parallel or if one 
of those (or both) is degenerate. 
*/ 
bool operator()(const Kernel::Segment_3&s1, 
const Kernel::Segment_3&s2); 


}; /* end Kernel::AreParallel_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Triangle_2<Kernel>` 

*/
class ConstructOppositeTriangle_2 {
public:


/*! 
returns the triangle with opposite orientation to \f$ t\f$ 
(this flips the positive and the negative side, but 
not bounded and unbounded side). 
*/ 
Kernel::Triangle_2 operator()(const Kernel::Triangle_2& t); 


}; /* end Kernel::ConstructOppositeTriangle_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::lexicographically_xy_smaller` 

*/
class LessXY_2 {
public:


/*! 
returns true iff the \f$ x\f$-coordinate of \f$ p\f$ is smaller than the 
\f$ x\f$-coordinate of \f$ q\f$ or if the are the same and 
the \f$ y\f$-coordinate of \f$ p\f$ is smaller than the \f$ y\f$-coordinate of \f$ q\f$. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 


}; /* end Kernel::LessXY_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class HasOnUnboundedSide_3 {
public:


/*! 
returns true iff \f$ p\f$ lies on the unbounded side of \f$ s\f$. 
*/ 
bool operator()(const Kernel::Sphere_3&s, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the unbounded side of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Tetrahedron_3&t, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the unbounded side of \f$ c\f$. 
*/ 
bool operator()(const Kernel::Iso_cuboid_3&c, 
const Kernel::Point_3&p); 


}; /* end Kernel::HasOnUnboundedSide_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::orientation` 

*/
class Orientation_2 {
public:


/*! 
returns `LEFT_TURN`, if \f$ r\f$ lies to the left of the oriented 
line \f$ l\f$ defined by \f$ p\f$ and \f$ q\f$, returns `RIGHT_TURN` if \f$ r\f$ 
lies to the right of \f$ l\f$, and returns `COLLINEAR` if \f$ r\f$ lies 
on \f$ l\f$. 
*/ 
Orientation operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 

/*! 
returns `LEFT_TURN` if \f$ u\f$ and \f$ v\f$ form a left turn, 
returns `RIGHT_TURN` if \f$ u\f$ and \f$ v\f$ form a right turn, 
and returns `COLLINEAR` if \f$ u\f$ and \f$ v\f$ are collinear. 
*/ 
Orientation operator()(const Kernel::Vector_2&u, 
const Kernel::Vector_2&v); 


}; /* end Kernel::Orientation_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Plane_3<Kernel>` 
\sa `Kernel::ConstructCrossProductVector_3` 

*/
class ConstructOrthogonalVector_3 {
public:


/*! 
returns a vector that is orthogonal to the plane `p` and directed 
to the positive side of `p`. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Plane_3& p); 

/*! 
returns a vector that is orthogonal to the plane defined by 
`Kernel::ConstructPlane_3()(p, q, r)` and directed 
to the positive side of this plane. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q, const Kernel::Point_3& r); 


}; /* end Kernel::ConstructOrthogonalVector_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::collinear_are_ordered_along_line` 

*/
class CollinearAreOrderedAlongLine_2 {
public:


/*! 
returns `true`, iff `q` lies between `p` 
and `r`. \pre `p, q` and `r` are collinear. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 


}; /* end Kernel::CollinearAreOrderedAlongLine_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class HasOnBoundary_2 {
public:


/*! 
returns true iff \f$ p\f$ lies on the boundary of \f$ c\f$. 
*/ 
bool operator()(const Kernel::Circle_2&c, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the boundary of \f$ i\f$. 
*/ 
bool operator()(const Kernel::Iso_rectangle_2&i, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the boundary of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Triangle_2&t, 
const Kernel::Point_2&p); 


}; /* end Kernel::HasOnBoundary_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::has_smaller_distance_to_point` 

*/
class LessDistanceToPoint_2 {
public:


/*! 
returns true iff the distance of \f$ q\f$ to \f$ p\f$ is 
smaller than the distance of \f$ r\f$ to \f$ p\f$. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 


}; /* end Kernel::LessDistanceToPoint_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A type representing tetrahedra in three dimensions. 

\refines CopyConstructible
\refines Assignable
\refines DefaultConstructible

\sa `CGAL::Tetrahedron_3<Kernel>` 
\sa `Kernel::BoundedSide_3` 
\sa `Kernel::ComputeVolume_3` 
\sa `Kernel::ConstructCentroid_3` 
\sa `Kernel::ConstructTetrahedron_3` 
\sa `Kernel::ConstructVertex_3` 
\sa `Kernel::Equal_2` 
\sa `Kernel::HasOnBoundary_3` 
\sa `Kernel::HasOnBoundedSide_3` 
\sa `Kernel::HasOnNegativeSide_3` 
\sa `Kernel::HasOnPositiveSide_3` 
\sa `Kernel::HasOnUnboundedSide_3` 
\sa `Kernel::IsDegenerate_3` 
\sa `Kernel::OrientedSide_3` 

*/
class Tetrahedron_3 {
public:

/// @}

}; /* end Kernel::Tetrahedron_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_3<Kernel>` 
\sa `Kernel::ConstructScaledVector_3` 

*/
class ConstructVector_3 {
public:


/*! 
introduces the vector \f$ b-a\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Point_3 &a, 
const Kernel::Point_3 &b); 

/*! 
introduces the vector \f$ b\f$. 
*/ 
Kernel::Vector_3 operator()(const Origin &o, 
const Kernel::Point_3 &b); 

/*! 
introduces the vector \f$ -a\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Point_3 &a, 
const Origin &o); 

/*! 
introduces the vector \f$ s.target()-s.source()\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Segment_3 &s); 

/*! 
introduces a vector having the same direction as \f$ r\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Ray_3 &r); 

/*! 
introduces a vector having the same direction as \f$ l\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Line_3 &l); 

/*! 
introduces a null vector . 
*/ 
Kernel::Vector_3 operator()(const Null_vector &NULL_VECTOR); 


}; /* end Kernel::ConstructVector_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::squared_radius` 

*/
class ComputeSquaredRadius_2 {
public:


/*! 
returns the squared radius of \f$ c\f$. 
*/ 
Kernel::FT operator()(const Kernel::Circle_2& c); 

/*! 
returns the squared radius of the circle passing through \f$ p\f$, \f$ q\f$ 
and \f$ r\f$. \pre `p, q` and `r` are not collinear. 
*/ 
Kernel::FT operator()(const Kernel::Point_2& p, 
const Kernel::Point_2& q, 
const Kernel::Point_2& r); 

/*! 
returns the squared radius of the smallest circle passing through \f$ p\f$, 
and \f$ q\f$, i.e. one fourth of the squared distance between \f$ p\f$ and \f$ q\f$. 
*/ 
Kernel::FT operator()(const Kernel::Point_2& p, 
const Kernel::Point_2& q); 

/*! 
returns the squared radius of the smallest circle passing through \f$ p\f$, i.e. \f$ 0\f$. 
*/ 
Kernel::FT operator()(const Kernel::Point_2& p); 


}; /* end Kernel::ComputeSquaredRadius_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_3<Kernel>` 

*/
class ComputeScalarProduct_3 {
public:


/*! 
returns the scalar (inner) product of the two vectors `v` and `w`. 
*/ 
Kernel::FT operator()(const Kernel::Vector_3& v, 
const Kernel::Vector_3& w); 


}; /* end Kernel::ComputeScalarProduct_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeX_2 {
public:


/*! 
returns the \f$ x\f$-coordinate of the point. 
*/ 
Kernel::FT operator()(const Kernel::Point_2& p) const; 

/*! 
returns the \f$ x\f$-coordinate of the vector. 
*/ 
Kernel::FT operator()(const Kernel::Vector_2& v) const; 


}; /* end Kernel::ComputeX_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Ray_3<Kernel>` 

*/
class ConstructOppositeRay_3 {
public:


/*! 
returns the ray with the same source as \f$ r\f$, but in opposite direction. 
*/ 
Kernel::Ray_3 operator()(const Kernel::Ray_3& r); 


}; /* end Kernel::ConstructOppositeRay_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Segment_3<Kernel>` 

*/
class ConstructMaxVertex_3 {
public:


/*! 
returns the vertex of 
`c` with lexicographically largest coordinates. 
*/ 
Kernel::Point_3 operator()(const 
Kernel::Iso_cuboid_3 &c); 

/*! 
returns the vertex of 
`s` with lexicographically largest coordinates. 
*/ 
Kernel::Point_3 operator()(const 
Kernel::Segment_3 &s); 


}; /* end Kernel::ConstructMaxVertex_3 */




/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeYmin_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the smallest \f$ y\f$-coordinate of the iso-rectangle. 
*/ 
Kernel::FT operator()(const Kernel::Iso_rectangle_2& r) const; 

/// @}

}; /* end Kernel::ComputeYmin_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Ray_2<Kernel>` 

*/
class ConstructSecondPoint_2 {
public:


/*! 
returns a point different from the source on 
the ray `r`. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Ray_2 &r); 


}; /* end Kernel::ConstructSecondPoint_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Direction_3<Kernel>` 

*/
class ConstructOppositeDirection_3 {
public:


/*! 
returns the direction opposite to \f$ d\f$. 
*/ 
Kernel::Direction_3 operator()(const 
Kernel::Direction_3& d); 


}; /* end Kernel::ConstructOppositeDirection_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\sa `CGAL::has_smaller_signed_distance_to_line` 

*/
class LessSignedDistanceToLine_2 {
public:

/// \name Refines 
/// `AdaptableFunctor` (with four arguments)
/// @{

/*! 

returns `true` if the signed distance from \f$ p\f$ and the oriented line \f$ l\f$ 
is smaller than the signed distance of \f$ q\f$ and \f$ l\f$. 

*/ 
bool operator()(const Kernel::Line_2& l, 
const Kernel::Point_2& p, 
const Kernel::Point_2& q); 

/*! 

returns `true` if the signed distance from \f$ r\f$ and the oriented line \f$ l\f$ 
defined by \f$ p\f$ and \f$ q\f$ is smaller than the signed distance of \f$ s\f$ and \f$ l\f$. 
\pre \f$ p != q\f$. 

*/ 
bool operator()(const Kernel::Point_2& p, 
const Kernel::Point_2& q, 
const Kernel::Point_2&r, 
const Kernel::Point_2&s); 

/// @}

}; /* end Kernel::LessSignedDistanceToLine_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::compare_squared_radius` 

*/
class CompareSquaredRadius_3 {
public:


/*! 
compares the squared radius of the sphere of radius 0 centered 
at `p` to `sr`. 
This returns the opposite sign of `sr`. 
*/ 
Comparison_result operator()(const Kernel::Point_3& p, 
const Kernel::FT& sr); 

/*! 
compares the squared radius of the sphere defined by the 
points `p` and `q` to `sr`. 
*/ 
Comparison_result operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::FT& sr); 

/*! 
compares the squared radius of the sphere defined by the 
points `p`, `q`, and `r` to `sr`. 
*/ 
Comparison_result operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::FT& sr); 

/*! 
compares the squared radius of the sphere defined by the 
points `p`, `q`, , `r`, and `s` to `sr`. 
*/ 
Comparison_result operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s, 
const Kernel::FT& sr); 


}; /* end Kernel::CompareSquaredRadius_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with five arguments) 

\sa `CGAL::side_of_oriented_sphere` 

*/
class SideOfOrientedSphere_3 {
public:


/*! 
returns the relative position of point `t` 
to the oriented sphere defined by \f$ p\f$, \f$ q\f$, \f$ r\f$ and \f$ s\f$. 
The order of the points \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$ is important, 
since it determines the orientation of the implicitly 
constructed sphere. If the points \f$ p\f$, \f$ q\f$, \f$ r\f$ and \f$ s\f$ 
are positive oriented, positive side is the bounded interior 
of the sphere. 

In case of degeneracies, `ON_ORIENTED_BOUNDARY` is returned 
if all points are coplanar. Otherwise, there is a cyclic permutation of the five points 
that puts four non coplanar points first, it is used to answer the predicate: 
e.g. `side_of_oriented_sphere(q, r, s, t, p)` is returned if \f$ q\f$, \f$ r\f$, \f$ s\f$, 
and \f$ t\f$ are non coplanar. 
*/ 
Oriented_side operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s, 
const Kernel::Point_3&t); 


}; /* end Kernel::SideOfOrientedSphere_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::midpoint` 

*/
class ConstructMidpoint_3 {
public:


/*! 
computes the midpoint of the segment \f$ pq\f$. 
*/ 
Kernel::Point_3 operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q ); 


}; /* end Kernel::ConstructMidpoint_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_x` 

*/
class CompareX_3 {
public:


/*! 
Compares the Cartesian \f$ x\f$-coordinates of points `p` and 
`q` 
*/ 
Comparison_result operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::CompareX_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 

*/
class ConstructRadicalLine_2 {
public:


/*! 
returns the radical line of the circles. 
\pre The two circles don't have the same center. 
*/ 
Kernel::Line_2 operator() 
(const Kernel::Circle_2& c1, 
const Kernel::Circle_2& c2); 


}; /* end Kernel::ConstructRadicalLine_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

*/
class CompareDihedralAngle_3 {
public:

/// \name Refines 
/// @{

/*! 
compares the dihedral angles \f$ \theta_1\f$ and \f$ \theta_2\f$, where 
\f$ \theta_1\f$ is the dihedral angle, in \f$ [0, \pi]\f$, of the tetrahedron 
\f$ (a_1, b_1, c_1, d_1)\f$ at the edge \f$ (a_1, b_1)\f$, and \f$ \theta_2\f$ is 
the angle in \f$ [0, \pi]\f$ such that \f$ cos(\theta_2) = cosine\f$. 
The result is the same as `operator()(b1-a1, c1-a1, d1-a1, cosine)`. 
\pre \f$ a_1\f$, \f$ b_1\f$, \f$ c_1\f$ are not collinear, and \f$ a_1\f$, \f$ b_1\f$, \f$ d_1\f$ are not collinear. 
*/ 
Comparison_result operator()(const K::Point_3& a1, 
const K::Point_3& b1, 
const K::Point_3& c1, 
const K::Point_3& d1, 
const K::FT& cosine); 

/*! 
compares the dihedral angles \f$ \theta_1\f$ and \f$ \theta_2\f$, where 
\f$ \theta_i\f$ is the dihedral angle in the tetrahedron \f$ (a_i, b_i, 
c_i, d_i)\f$ at the edge \f$ (a_i, b_i)\f$. These two angles are computed 
in \f$ [0, \pi]\f$. 
The result is the same as `operator()(b1-a1, c1-a1, d1-a1, b2-a2, c2-a2, d2-a2)`. 
\pre For \f$ i \in\{1,2\}\f$, \f$ a_i\f$, \f$ b_i\f$, \f$ c_i\f$ are not collinear, and \f$ a_i\f$, \f$ b_i\f$, \f$ d_i\f$ are not collinear. 
*/ 
Comparison_result operator()(const K::Point_3& a1, 
const K::Point_3& b1, 
const K::Point_3& c1, 
const K::Point_3& d1, 
const K::Point_3& a2, 
const K::Point_3& b2, 
const K::Point_3& c2, 
const K::Point_3& d2); 

/*! 
compares the dihedral angles \f$ \theta_1\f$ and \f$ \theta_2\f$, where 
\f$ \theta_1\f$ is the dihedral angle, in \f$ [0, \pi]\f$, between the 
vectorial planes defined by \f$ (u_1, v_1)\f$ and \f$ (u_1, w_1)\f$, and 
\f$ \theta_2\f$ is the angle in \f$ [0, \pi]\f$ such that \f$ cos(\theta_2) = 
cosine\f$. 
\pre \f$ u_1\f$ and \f$ v_1\f$ are not collinear, and \f$ u_1\f$ and \f$ w_1\f$ are not collinear. 
*/ 
Comparison_result operator()(const K::Vector_3& u1, 
const K::Vector_3& v1, 
const K::Vector_3& w1, 
const K::FT& cosine); 

/*! 
compares the dihedral angles \f$ \theta_1\f$ and \f$ \theta_2\f$, where 
\f$ \theta_i\f$ is the dihedral angle between the vectorial planes 
defined by \f$ (u_i, v_i)\f$ and \f$ (u_i, w_i)\f$. These two angles are 
computed in \f$ [0, \pi]\f$. 
\pre For \f$ i \in\{1,2\}\f$, \f$ u_i\f$ and \f$ v_i\f$ are not collinear, and \f$ u_i\f$ and \f$ w_i\f$ are not collinear. 
*/ 
Comparison_result operator()(const K::Vector_3& u1, 
const K::Vector_3& v1, 
const K::Vector_3& w1, 
const K::Vector_3& u2, 
const K::Vector_3& v2, 
const K::Vector_3& w2); 

/// @}

}; /* end Kernel::CompareDihedralAngle_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_z` 

*/
class CompareZ_3 {
public:


/*! 
Compares the Cartesian \f$ z\f$-coordinates of points `p` and 
`q` 
*/ 
Comparison_result operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q); 


}; /* end Kernel::CompareZ_3 */




/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::collinear_are_strictly_ordered_along_line` 

*/
class CollinearAreStrictlyOrderedAlongLine_2 {
public:


/*! 
returns `true`, iff `q` lies strictly between 
`p` and `r`. \pre `p, q` and `r` are collinear. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 


}; /* end Kernel::CollinearAreStrictlyOrderedAlongLine_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Object` 
\sa `Kernel::Assign_2` 
\sa `Kernel::Assign_3` 
\sa `Kernel::Object_2` 
\sa `Kernel::Object_3` 

*/
class ConstructObject_3 {
public:


/*! 
constructs an object that contains `t` and returns it. 
*/ 
template <class T> 
Object_3 operator()(const T& t); 


}; /* end Kernel::ConstructObject_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Direction_2<Kernel>` 

*/
class ConstructDirection_2 {
public:


/*! 
introduces the direction of vector \f$ v\f$. 
*/ 
Kernel::Direction_2 operator()(const Kernel::Vector_2 &v); 

/*! 
introduces the direction of line \f$ l\f$. 
*/ 
Kernel::Direction_2 operator()(const Kernel::Line_2 &l); 

/*! 
introduces the direction of ray \f$ r\f$. 
*/ 
Kernel::Direction_2 operator()(const Kernel::Ray_2 &r); 

/*! 
introduces the direction of segment \f$ s\f$. 
*/ 
Kernel::Direction_2 operator()(const Kernel::Segment_2 &s); 


}; /* end Kernel::ConstructDirection_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_3<Kernel>` 

*/
class ConstructDifferenceOfVectors_3 {
public:


/*! 
introduces the vector \f$ v1 - v2\f$. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Vector_3 &v1, 
const Kernel::Vector_3 &v2); 


}; /* end Kernel::ConstructDifferenceOfVectors_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::normal` 
\sa `CGAL::unit_normal` 

*/
class ConstructUnitNormal_3 {
public:


/*! 
computes the unit normal of the vectors`q-p` and `r-p`. 
This requires that `Kernel::FT` supports the `sqrt` operation. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q, 
const Kernel::Point_3& r ); 


}; /* end Kernel::ConstructUnitNormal_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Circle_3<Kernel>` 

*/
class ConstructCenter_3 {
public:


/*! 
compute the center of the sphere \f$ s\f$. 
*/ 
Kernel::Point_3 operator()(const Kernel::Sphere_3 & s); 

/*! 
compute the center of the circle \f$ c\f$. 
*/ 
Kernel::Point_3 operator()(const Kernel::Circle_3 & c); 


}; /* end Kernel::ConstructCenter_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

for all pairs `Type1` and `Type2`, where 
the types `Type1` and `Type2` can be any of the 
following: 

- `Kernel::Point_3` 
- `Kernel::Line_3` 
- `Kernel::Ray_3` 
- `Kernel::Segment_3` 
- `Kernel::Plane_3` 


\refines ::AdaptableFunctor (with three arguments) 

\sa `Kernel::CompareDistance_3` 
\sa `CGAL::compare_distance_to_point` 
\sa `CGAL::compare_squared_distance` 

*/
class CompareSquaredDistance_3 {
public:


/*! 
compares the squared distance between the two geometrical objects 
`obj1` and `obj2` to the value `d2` 
*/ 
Comparison_result operator()(const Type1& obj1, 
const Type2& obj2, 
const Kernel::FT&d2); 


}; /* end Kernel::CompareSquaredDistance_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::Vector_3<Kernel>` 
\sa `CGAL::determinant` 

*/
class ComputeDeterminant_3 {
public:


/*! 
returns the determinant of the three vectors \f$ u\f$, \f$ v\f$ and \f$ w\f$. 
*/ 
Kernel::FT operator()(const Kernel::Vector_3& u, 
const Kernel::Vector_3& v, 
const Kernel::Vector_3& w); 


}; /* end Kernel::ComputeDeterminant_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\anchor fig-compare14
\image html compare1.gif

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::compare_y` 

*/
class CompareY_2 {
public:


/*! 
Compares the Cartesian \f$ y\f$-coordinates of points `p` and 
`q` 
*/ 
Comparison_result operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q); 

/*! 
compares the \f$ y\f$-coordinates of \f$ p\f$ and the 
intersection of lines \f$ l1\f$ and \f$ l2\f$.

See Figure \ref fig-compare14 (a).
*/ 
Comparison_result operator()(const Kernel::Point_2 &p, 
const Kernel::Line_2 &l1, 
const Kernel::Line_2 &l2); 

/*! 
compares the \f$ y\f$-coordinates of the intersection of line \f$ l\f$ 
with line \f$ h1\f$ and with line \f$ h2\f$.

See Figure \ref fig-compare14 (b).
*/
Comparison_result operator()(const Kernel::Line_2 &l, 
const Kernel::Line_2 &h1, 
const Kernel::Line_2 &h2); 

/*! 
compares the \f$ y\f$-coordinates of the intersection of lines \f$ l1\f$ 
and \f$ l2\f$ and the intersection of lines \f$ h1\f$ and \f$ h2\f$.

See Figure \ref fig-compare14 (c).
*/ 
Comparison_result operator()(const Kernel::Line_2 &l1, 
const Kernel::Line_2 &l2, 
const Kernel::Line_2 &h1, 
const Kernel::Line_2 &h2); 


}; /* end Kernel::CompareY_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Segment_2<Kernel>` 
\sa `CGAL::Ray_2<Kernel>` 

*/
class ConstructSource_2 {
public:


/*! 
returns the source of 
the segment `s`. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Segment_2 &s); 

/*! 
returns the source of 
the ray `r`. 
*/ 
Kernel::Point_2 operator()(const 
Kernel::Ray_2 &r); 


}; /* end Kernel::ConstructSource_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::orientation` 

*/
class Orientation_3 {
public:


/*! 
returns `POSITIVE`, if \f$ s\f$ lies on the positive side of the oriented 
plane \f$ h\f$ defined by \f$ p\f$, \f$ q\f$, and \f$ r\f$, returns `NEGATIVE` if \f$ s\f$ 
lies on the negative side of \f$ h\f$, and returns `COPLANAR` if \f$ s\f$ lies 
on \f$ h\f$. 
*/ 
Orientation operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s); 

/*! 
returns `POSITIVE` if \f$ u\f$, \f$ v\f$ and \f$ w\f$ are positively oriented, 
returns `NEGATIVE` if \f$ u\f$, \f$ v\f$ and \f$ w\f$ are negatively oriented, 
and returns `COPLANAR` if \f$ u\f$, \f$ v\f$ and \f$ w\f$ are coplanar. 
*/ 
Orientation operator()(const Kernel::Vector_3&u, 
const Kernel::Vector_3&v, 
const Kernel::Vector_3&w); 

/*! 
returns the orientation of the sphere `s`. 
*/ 
Orientation operator()(const Kernel::Sphere_3&s); 


}; /* end Kernel::Orientation_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

for all tuples of types `Type1`, `Type2`, `Type3` 
and `Type4` in the following set of types: 

- `Kernel::Point_2` 
- `Kernel::Line_2` 
- `Kernel::Ray_2` 
- `Kernel::Segment_2` 
- `Kernel::Triangle_2` 


\sa `Kernel::CompareSquaredDistance_2` 
\sa `CGAL::compare_distance_to_point` 
\sa `CGAL::compare_squared_distance` 

\refines ::AdaptableFunctor (with three arguments)

*/
class CompareDistance_2 {
public:

/*! 
compares the squared distance between `obj1` and `obj2` to 
the squared distance between `obj1` and `obj3` 
*/ 
Comparison_result operator()(const Type1& obj1, 
const Type2& obj2, 
const Type3& obj3); 

/*! 
compares the squared distance between `obj1` and `obj2` to 
the squared distance between `obj3` and `obj4` 
*/ 
Comparison_result operator()(const Type1& obj1, 
const Type2& obj2, 
const Type3& obj3, 
const Type4& obj4); 

}; /* end Kernel::CompareDistance_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Line_3<Kernel>` 

*/
class ConstructLine_3 {
public:


/*! 
introduces a line passing through the points \f$ p\f$ and \f$ q\f$. 
Line is directed from \f$ p\f$ to \f$ q\f$. 
*/ 
Kernel::Line_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Point_3 &q); 

/*! 
introduces a line passing through point \f$ p\f$ and 
oriented by \f$ v\f$. 
*/ 
Kernel::Line_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Vector_3&v); 

/*! 
introduces a line passing through point \f$ p\f$ with 
direction \f$ d\f$. 
*/ 
Kernel::Line_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Direction_3&d); 

/*! 
returns the line supporting the segment \f$ s\f$, 
oriented from source to target. 
*/ 
Kernel::Line_3 operator()(const Kernel::Segment_3 &s); 

/*! 
returns the line supporting the ray \f$ r\f$, with the 
same orientation. 
*/ 
Kernel::Line_3 operator()(const Kernel::Ray_3 &r); 


}; /* end Kernel::ConstructLine_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Direction_2<Kernel>` 

*/
class ConstructOppositeDirection_2 {
public:


/*! 
returns the direction opposite to \f$ d\f$. 
*/ 
Kernel::Direction_2 operator()(const 
Kernel::Direction_2& d); 


}; /* end Kernel::ConstructOppositeDirection_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::collinear_are_strictly_ordered_along_line` 

*/
class CollinearAreStrictlyOrderedAlongLine_3 {
public:


/*! 
returns `true`, iff `q` lies strictly between 
`p` and `r`. \pre `p, q` and `r` are collinear. 
*/ 
bool operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 


}; /* end Kernel::CollinearAreStrictlyOrderedAlongLine_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Ray_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 

*/
class ConstructPointOn_2 {
public:


/*! 
returns an arbitrary point on `l`. It holds 
`point(i) == point(j)`, iff `i==j`. 
Furthermore, is directed from `point(i)` 
to `point(j)`, for all `i` \f$ <\f$ `j`. 
*/ 
Kernel::Point_2 operator()(const Kernel::Line_2& l, 
int i); 

/*! 
returns a point on `r`. `point(0)` is the source, 
`point(i)`, with \f$ i>0\f$, is different from the 
source. \pre \f$ i \geq0\f$. 
*/ 
Kernel::Point_2 operator()(const Kernel::Ray_2& r, 
int i); 

/*! 
returns source or target of `s`: `point(0)` returns 
the source of `s`, `point(1)` returns the target of `s`. 
The parameter `i` is taken modulo 2, which gives 
easy access to the other end point. 
*/ 
Kernel::Point_2 operator()(const Kernel::Segment_2& s, 
int i); 


}; /* end Kernel::ConstructPointOn_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class HasOnBoundedSide_3 {
public:


/*! 
returns true iff \f$ p\f$ lies on the bounded side of \f$ s\f$. 
*/ 
bool operator()(const Kernel::Sphere_3&s, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the bounded side of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Tetrahedron_3&t, 
const Kernel::Point_3&p); 

/*! 
returns true iff \f$ p\f$ lies on the bounded side of \f$ c\f$. 
*/ 
bool operator()(const Kernel::Iso_cuboid_3&c, 
const Kernel::Point_3&p); 


}; /* end Kernel::HasOnBoundedSide_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeXmax_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the largest \f$ x\f$-coordinate of the iso-rectangle. 
*/ 
Kernel::FT operator()(const Kernel::Iso_rectangle_2& r) const; 

/// @}

}; /* end Kernel::ComputeXmax_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide 

for all pairs `Type1` and `Type2`, where 
the types `Type1` and `Type2` can be any of the 
following: 

- `Kernel::Line_2` 
- `Kernel::Ray_2` 
- `Kernel::Segment_2` 
- `Kernel::Triangle_2` 
- `Kernel::Iso_rectangle_2` 


\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::intersection` 

*/
class Intersect_2 {
public:


/*! 
computes the intersection region of two geometrical objects of type 
`Type1` and `Type2` 
*/ 
Kernel::Object_2 operator()(Type1 obj1, Type2 obj2); 


}; /* end Kernel::Intersect_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Object` 
\sa `Kernel::Object_2` 
\sa `Kernel::Intersect_2` 

*/
class Assign_2 {
public:


/*! 
assigns `o` to `t` if `o` 
was constructed from an object of type `T`. 
Returns `true`, if the assignment was possible. 
*/ 
template <class T> 
bool operator()(T& t, const Kernel::Object_2&o); 


}; /* end Kernel::Assign_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 
\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class OrientedSide_3 {
public:


/*! 
returns `ON_ORIENTED_BOUNDARY`, 
`ON_NEGATIVE_SIDE`, or the constant `ON_POSITIVE_SIDE`, 
depending on the position of \f$ p\f$ relative to the oriented plane \f$ h\f$. 
*/ 
Oriented_side operator()(const Kernel::Plane_3&h, 
const Kernel::Point_3&p); 

/*! 
returns `ON_ORIENTED_BOUNDARY`, 
`ON_NEGATIVE_SIDE`, or the constant `ON_POSITIVE_SIDE`, 
depending on the position of \f$ p\f$ relative to the oriented tetrahedron \f$ t\f$. 
*/ 
Oriented_side operator()(const Kernel::Tetrahedron_3&t, 
const Kernel::Point_3&p); 

/*! 
returns `ON_ORIENTED_BOUNDARY`, 
`ON_NEGATIVE_SIDE`, or the `ON_POSITIVE_SIDE`, 
depending on the position of `p` relative to the oriented sphere `s`. 
*/ 
Oriented_side operator()(const Kernel::Sphere_3& s, 
const Kernel::Point_3& p); 


}; /* end Kernel::OrientedSide_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

*/
class CompareAngleWithXAxis_2 {
public:


/*! 
compares 
the angles between the positive \f$ x\f$-axis and the directions in 
counterclockwise order. 
*/ 
Comparison_result operator()(const 
Kernel::Direction_2& d, const Kernel::Direction_2& e); 


}; /* end Kernel::CompareAngleWithXAxis_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::Circle_2<Kernel>` 

*/
class ConstructCircle_2 {
public:


/*! 

introduces a variable of type `Kernel::Circle_2`. 
It is initialized to the circle with center `center`, 
squared radius `squared_radius` and orientation 
`orientation`. 
\pre `orientation` \f$ \neq\f$ `COLLINEAR`, and further, `squared_radius` \f$ \geq\f$ 0. 
*/ 
Kernel::Circle_2 operator()( Kernel::Point_2 const& center, 
Kernel::FT const& squared_radius, 
Orientation const& orientation 
= COUNTERCLOCKWISE); 

/*! 

introduces a variable of type `Kernel::Circle_2`. 
It is initialized to the unique circle which passes through 
the points `p`, `q` and `r`. The orientation of 
the circle is the orientation of the point triple `p`, 
`q`, `r`. 
\pre `p`, `q`, and `r` are not collinear. 
*/ 
Kernel::Circle_2 operator()( Kernel::Point_2 const& p, 
Kernel::Point_2 const& q, 
Kernel::Point_2 const& r); 

/*! 

introduces a variable of type `Kernel::Circle_2`. 
It is initialized to the circle with diameter \f$ \overline{pq}\f$ 
and orientation `orientation`. 
\pre `orientation` \f$ \neq\f$ `COLLINEAR`. 
*/ 
Kernel::Circle_2 operator()( Kernel::Point_2 const& p, 
Kernel::Point_2 const& q, 
Orientation const& orientation 
= COUNTERCLOCKWISE); 

/*! 

introduces a variable of type `Kernel::Circle_2`. 
It is initialized to the circle with center `center`, squared 
radius zero and orientation `orientation`. 
\pre `orientation` \f$ \neq\f$ `COLLINEAR`. 
\post .`is_degenerate()` = `true`. 
*/ 
Kernel::Circle_2 operator()( Kernel::Point_2 const& center, 
Orientation const& orientation 
= COUNTERCLOCKWISE); 


}; /* end Kernel::ConstructCircle_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Line_3<Kernel>` 
\sa `CGAL::Plane_3<Kernel>` 

*/
class ConstructProjectedPoint_3 {
public:


/*! 
returns the orthogonal projection of `p` onto `l`. 
*/ 
Kernel::Point_3 operator()(const Kernel::Line_3& l, 
const Kernel::Point_3& p); 

/*! 
returns the orthogonal projection of `p` onto `h`. 
*/ 
Kernel::Point_3 operator()(const Kernel::Plane_3& h, 
const Kernel::Point_3& p); 


}; /* end Kernel::ConstructProjectedPoint_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeX_3 {
public:

/// \name Refines 
/// @{

/*! 
returns the \f$ x\f$-coordinate of the point. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p) const; 

/*! 
returns the \f$ x\f$-coordinate of the vector. 
*/ 
Kernel::FT operator()(const Kernel::Vector_3& v) const; 

/// @}

}; /* end Kernel::ComputeX_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::are_strictly_ordered_along_line` 

*/
class AreStrictlyOrderedAlongLine_2 {
public:


/*! 
returns `true`, iff the three points are collinear and 
`q` lies strictly between `p` and `r`. 
Note that `false` is returned, if `q==p` or 
`q==r`. 
*/ 
bool operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 


}; /* end Kernel::AreStrictlyOrderedAlongLine_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::bisector` 

*/
class ConstructBisector_3 {
public:


/*! 
constructs the bisector plane of \f$ p\f$ and \f$ q\f$. 
The bisector is oriented in such a way that `p` lies on its 
positive side. \pre `p` and `q` are not equal. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q ); 

/*! 
constructs the bisector of the two planes \f$ h1\f$ and \f$ h2\f$. 
In the general case, the bisector has a normal vector which has the same 
direction as the sum of the normalized normal vectors of the two planes, and 
passes through the intersection of `h1` and `h2`. 
If `h1` and `h2` are parallel, then the bisector is defined as the 
plane which has the same oriented normal vector as `l1`, and which is at 
the same distance from `h1` and `h2`. 
This function requires that `Kernel::RT` supports the `sqrt()` 
operation. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Plane_3&h1, 
const Kernel::Plane_3&h2); 


}; /* end Kernel::ConstructBisector_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\sa `CGAL::angle` 

*/
class Angle_2 {
public:


/*! 
returns `OBTUSE`, `RIGHT` or `ACUTE` depending 
on the angle formed by the two vectors \f$ u\f$ and \f$ v\f$. 
*/ 
Angle operator()(const Kernel::Vector_2&u, 
const Kernel::Vector_2&v); 

/*! 
returns `OBTUSE`, `RIGHT` or `ACUTE` depending 
on the angle formed by the three points \f$ p\f$, \f$ q\f$, \f$ r\f$ (\f$ q\f$ being the vertex of 
the angle). The returned value is the same as `operator()(p - q, r - q)`. 
*/ 
Angle operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r); 

/*! 
returns `OBTUSE`, `RIGHT` or `ACUTE` depending 
on the angle formed by the two vectors \f$ pq\f$, \f$ rs\f$. The returned value is 
the same as `operator()(q - p, s - r)`. 
*/ 
Angle operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r, 
const Kernel::Point_2&s); 


}; /* end Kernel::Angle_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_2<Kernel>` 

*/
class ConstructSumOfVectors_2 {
public:


/*! 
introduces the vector \f$ v1 + v2\f$. 
*/ 
Kernel::Vector_2 operator()(const Kernel::Vector_2 &v1, 
const Kernel::Vector_2 &v2); 


}; /* end Kernel::ConstructSumOfVectors_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Line_2<Kernel>` 
\sa `CGAL::Ray_2<Kernel>` 
\sa `CGAL::Segment_2<Kernel>` 

*/
class IsVertical_2 {
public:


/*! 
returns true iff \f$ o\f$ is vertical. 
*/ 
bool operator()(const Kernel::Line_2&o); 

/*! 
returns true iff \f$ o\f$ is vertical. 
*/ 
bool operator()(const Kernel::Ray_2&o); 

/*! 
returns true iff \f$ o\f$ is vertical. 
*/ 
bool operator()(const Kernel::Segment_2&o); 


}; /* end Kernel::IsVertical_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Iso_cuboid_3<Kernel>` 
\sa `CGAL::Tetrahedron_3<Kernel>` 

*/
class ComputeVolume_3 {
public:


/*! 
returns the volume of \f$ c\f$. 
*/ 
Kernel::FT operator()(const Kernel::Iso_cuboid_3& c); 

/*! 
returns the signed volume of \f$ t\f$. 
*/ 
Kernel::FT operator()(const Kernel::Tetrahedron_3& t); 

/*! 
returns the signed volume of the tetrahedron defined by the four 
points `p0`, `p1`, `p2`, `p3`. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p0, 
const Kernel::Point_3& p1, 
const Kernel::Point_3& p2, 
const Kernel::Point_3& p3); 


}; /* end Kernel::ComputeVolume_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Point_2<Kernel>` 

*/
class ConstructTranslatedPoint_2 {
public:


/*! 
returns the point obtained by translating `p` by the vector 
`v`. 
*/ 
Kernel::Point_2 operator()(const Kernel::Point_2& p, 
const Kernel::Vector_2& v); 

/*! 
returns the point obtained by translating a point at the origin by the vector 
`v`. 
*/ 
Kernel::Point_2 operator()(const Origin& o, 
const Kernel::Vector_2& v); 


}; /* end Kernel::ConstructTranslatedPoint_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Vector_2<Kernel>` 

*/
class ConstructPerpendicularVector_2 {
public:


/*! 
returns `v` rotated clockwise by 90 degrees, if \f$ o\f$ is 
`CLOCKWISE`, and rotated counterclockwise otherwise. 
\pre \f$ o\f$ is not `COLLINEAR`. 

*/ 
Kernel::Vector_2 operator()(const Kernel::Vector_2& v, 
Orientation o); 


}; /* end Kernel::ConstructPerpendicularVector_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::coplanar_orientation` 

*/
class CoplanarOrientation_3 {
public:


/*! 
Let \f$ P\f$ be the plane defined by the points `p`, `q`, 
and `r`. Note that the order defines the orientation of 
\f$ P\f$. The function computes the orientation of points `p`, 
`q`, and `s` in \f$ P\f$: Iff `p`, `q`, `s` are 
collinear, `COLLINEAR` is returned. Iff \f$ P\f$ and the plane 
defined by `p`, `q`, and `s` have the same orientation, 
`POSITIVE` is returned; otherwise `NEGATIVE` is returned. 
\pre `p`, `q`, `r`, and `s` are coplanar and `p`, `q`, and `r` are not collinear. 
*/ 
Orientation operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s); 

/*! 
If `p,q,r` are collinear, then `COLLINEAR` is returned. 
If not, then `p,q,r` define a plane \f$ P\f$. The return value in this case is 
either `POSITIVE` or `NEGATIVE`, but we don't specify it explicitly. 
However, we guarantee that all calls to this predicate over 3 points in \f$ P\f$ 
will return a coherent orientation if considered a 2D orientation in \f$ P\f$. 
*/ 
Orientation operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r); 


}; /* end Kernel::CoplanarOrientation_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `Kernel::ConstructCentroid_3` 
\sa `CGAL::centroid` 
\sa `CGAL::barycenter` 

*/
class ConstructBarycenter_3 {
public:


/*! 
compute the barycenter of the points \f$ p1\f$ and \f$ p2\f$ with corresponding 
weights \f$ w1\f$ and \f$ 1-w1\f$. 
*/ 
Kernel::Point_3 
operator()( const Kernel::Point_3& p1, const Kernel::FT&w1, 
const Kernel::Point_3& p2); 

/*! 
compute the barycenter of the points \f$ p1\f$ and \f$ p2\f$ with corresponding 
weights \f$ w1\f$ and \f$ w2\f$. \pre w1+w2 != 0. 
*/ 
Kernel::Point_3 
operator()( const Kernel::Point_3& p1, const Kernel::FT&w1, 
const Kernel::Point_3& p2, const Kernel::FT&w2); 

/*! 
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$ and \f$ p3\f$ with corresponding 
weights \f$ w1\f$, \f$ w2\f$ and \f$ 1-w1-w2\f$. 
*/ 
Kernel::Point_3 
operator()( const Kernel::Point_3& p1, const Kernel::FT&w1, 
const Kernel::Point_3& p2, const Kernel::FT&w2, 
const Kernel::Point_3& p3); 

/*! 
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$ and \f$ p3\f$ with corresponding 
weights \f$ w1\f$, \f$ w2\f$ and \f$ w3\f$. \pre w1+w2+w3 != 0. 
*/ 
Kernel::Point_3 
operator()( const Kernel::Point_3& p1, const Kernel::FT&w1, 
const Kernel::Point_3& p2, const Kernel::FT&w2, 
const Kernel::Point_3& p3, const Kernel::FT&w3); 

/*! 
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$, \f$ p3\f$ and \f$ p4\f$ with corresponding 
weights \f$ w1\f$, \f$ w2\f$, \f$ w3\f$ and \f$ 1-w1-w2-w3\f$. 
*/ 
Kernel::Point_3 
operator()( const Kernel::Point_3& p1, const Kernel::FT&w1, 
const Kernel::Point_3& p2, const Kernel::FT&w2, 
const Kernel::Point_3& p3, const Kernel::FT&w3, 
const Kernel::Point_3& p4); 

/*! 
compute the barycenter of the points \f$ p1\f$, \f$ p2\f$, \f$ p3\f$ and \f$ p4\f$ with corresponding 
weights \f$ w1\f$, \f$ w2\f$, \f$ w3\f$ and \f$ w4\f$. \pre w1+w2+w3+w4 != 0. 
*/ 
Kernel::Point_3 
operator()( const Kernel::Point_3& p1, const Kernel::FT&w1, 
const Kernel::Point_3& p2, const Kernel::FT&w2, 
const Kernel::Point_3& p3, const Kernel::FT&w3, 
const Kernel::Point_3& p4, const Kernel::FT&w4); 


}; /* end Kernel::ConstructBarycenter_3 */




/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Sphere_3<Kernel>` 
\sa `CGAL::Circle_3<Kernel>` 
\sa `CGAL::squared_radius` 

*/
class ComputeSquaredRadius_3 {
public:


/*! 
returns the squared radius of \f$ s\f$. 
*/ 
Kernel::FT operator()(const Kernel::Sphere_3& s); 

/*! 
returns the squared radius of \f$ c\f$. 
*/ 
Kernel::FT operator()(const Kernel::Circle_3& c); 

/*! 
returns the squared radius of the sphere passing through \f$ p\f$, \f$ q\f$, \f$ r\f$ 
and \f$ s\f$. \pre `p, q, r` and `s` are not coplanar. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q, 
const Kernel::Point_3& r, 
const Kernel::Point_3& s); 

/*! 
returns the squared radius of the sphere passing through \f$ p\f$, \f$ q\f$ and 
\f$ r\f$, and whose center is in the plane defined by these three points. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q, 
const Kernel::Point_3& r); 

/*! 
returns the squared radius of the smallest circle passing through \f$ p\f$, 
and \f$ q\f$, i.e. one fourth of the squared distance between \f$ p\f$ and \f$ q\f$. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q); 

/*! 
returns the squared radius of the smallest circle passing through \f$ p\f$, i.e. \f$ 0\f$. 
*/ 
Kernel::FT operator()(const Kernel::Point_3& p); 


}; /* end Kernel::ComputeSquaredRadius_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with five arguments) 

\sa `CGAL::side_of_bounded_sphere` 

*/
class SideOfBoundedSphere_3 {
public:


/*! 
returns the relative position of point `t` 
to the sphere defined by \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$. The order 
of the points \f$ p\f$, \f$ q\f$, \f$ r\f$, and \f$ s\f$ does not matter. 
\pre `p, q, r` and `s` are not coplanar. 
*/ 
Bounded_side operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&s, 
const Kernel::Point_3&t); 

/*! 
returns the position of the point `t` relative to the sphere 
passing through \f$ p\f$, \f$ q\f$, and \f$ r\f$ and whose center is in the plane defined 
by these three points. 
*/ 
Bounded_side operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&r, 
const Kernel::Point_3&t); 

/*! 
returns the position of the point `t` relative to the sphere 
that has \f$ pq\f$ as its diameter. 
*/ 
Bounded_side operator()(const Kernel::Point_3&p, 
const Kernel::Point_3&q, 
const Kernel::Point_3&t); 


}; /* end Kernel::SideOfBoundedSphere_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Point_3<Kernel>` 

*/
class ConstructTranslatedPoint_3 {
public:


/*! 
returns the point obtained by translating `p` by the vector 
`v`. 
*/ 
Kernel::Point_3 operator()(const Kernel::Point_3& p, 
const Kernel::Vector_3& v); 

/*! 
returns the point obtained by translating a point at the origin by the vector 
`v`. 
*/ 
Kernel::Point_3 operator()(const Origin& o, 
const Kernel::Vector_3& v); 


}; /* end Kernel::ConstructTranslatedPoint_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Segment_3<Kernel>` 

*/
class ConstructOppositeSegment_3 {
public:


/*! 
returns the segment representing the same set of points as \f$ s\f$, 
but with opposite orientation. 
*/ 
Kernel::Segment_3 operator()(const Kernel::Segment_3& s); 


}; /* end Kernel::ConstructOppositeSegment_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor 

*/
class ComputeXmin_2 {
public:

/// \name Refines 
/// @{

/*! 
returns the smallest \f$ x\f$-coordinate of the iso-rectangle. 
*/ 
Kernel::FT operator()(const Kernel::Iso_rectangle_2& r) const; 

/// @}

}; /* end Kernel::ComputeXmin_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::Direction_2<Kernel>` 

*/
class CounterclockwiseInBetween_2 {
public:


/*! 
returns `true` iff `d` is not equal to `d1`, and 
while rotating counterclockwise starting at `d1`, 
`d` is reached strictly before `d2` is reached. 
Note that true is returned if `d1` == `d2`, unless 
also `d` == `d1`. 
*/ 
bool operator()(const Kernel::Direction_2&d, 
const Kernel::Direction_2&d1, 
const Kernel::Direction_2&d2); 


}; /* end Kernel::CounterclockwiseInBetween_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `CGAL::Line_2<Kernel>` 

*/
class ConstructOppositeLine_2 {
public:


/*! 
returns the line representing the same set of points as \f$ l\f$, 
but with opposite direction. 
*/ 
Kernel::Line_2 operator()(const Kernel::Line_2& l); 


}; /* end Kernel::ConstructOppositeLine_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with four arguments) 

\sa `CGAL::side_of_oriented_circle` 

*/
class SideOfOrientedCircle_2 {
public:


/*! 
returns the relative position of point `t` 
to the oriented circle defined by \f$ p\f$, \f$ q\f$ and \f$ r\f$. 
The order of the points \f$ p\f$, \f$ q\f$ and \f$ r\f$ is important, 
since it determines the orientation of the implicitly 
constructed circle. 

If \f$ p\f$, \f$ q\f$ and \f$ r\f$ are collinear, the circle degenerates in a line. 
`ON_ORIENTED_BOUNDARY` is returned if \f$ t\f$ is also collinear or if two 
points are identical, 
otherwise, `side_of_oriented_circle(r, q, t, p)` is returned. 

*/ 
Oriented_side operator()(const Kernel::Point_2&p, 
const Kernel::Point_2&q, 
const Kernel::Point_2&r, 
const Kernel::Point_2&t); 


}; /* end Kernel::SideOfOrientedCircle_2 */

/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::Triangle_3<Kernel>` 

*/
class ConstructTriangle_3 {
public:


/*! 
introduces a triangle with vertices \f$ p\f$, \f$ q\f$ and \f$ r\f$. 
*/ 
Kernel::Triangle_3 operator()(const Kernel::Point_3 &p, 
const Kernel::Point_3 &q, 
const Kernel::Point_3 &r); 


}; /* end Kernel::ConstructTriangle_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 

*/
class ConstructPerpendicularLine_3 {
public:


/*! 
returns the line that is perpendicular to `pl` and that 
passes through point `p`. The line is oriented from 
the negative to the positive side of `pl` 
*/ 
Kernel::Line_3 operator()(const Kernel::Plane_3& pl, 
const Kernel::Point_3& p); 


}; /* end Kernel::ConstructPerpendicularLine_3 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Circle_2<Kernel>` 
\sa `CGAL::Iso_rectangle_2<Kernel>` 
\sa `CGAL::Triangle_2<Kernel>` 

*/
class HasOnUnboundedSide_2 {
public:


/*! 
returns true iff \f$ p\f$ lies on the unbounded side of \f$ c\f$. 
*/ 
bool operator()(const Kernel::Circle_2&c, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the unbounded side of \f$ i\f$. 
*/ 
bool operator()(const Kernel::Iso_rectangle_2&i, 
const Kernel::Point_2&p); 

/*! 
returns true iff \f$ p\f$ lies on the unbounded side of \f$ t\f$. 
*/ 
bool operator()(const Kernel::Triangle_2&t, 
const Kernel::Point_2&p); 


}; /* end Kernel::HasOnUnboundedSide_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Iso_rectangle_2<Kernel>` 

*/
class ConstructIsoRectangle_2 {
public:


/*! 
introduces an iso-oriented rectangle with diagonal 
opposite vertices \f$ p\f$ and \f$ q\f$ such that \f$ p\f$ is the 
lexicographically smallest point in the rectangle. 
*/ 
Kernel::Iso_rectangle_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Point_2 &q); 

/*! 
introduces an iso-oriented rectangle with diagonal 
opposite vertices \f$ p\f$ and \f$ q\f$. The `int` argument value is 
only used to distinguish the two overloaded functions. 
\pre \f$ p.x()<=q.x()\f$ and \f$ p.y()<=q.y()\f$. 
*/ 
Kernel::Iso_rectangle_2 operator()(const Kernel::Point_2 &p, 
const Kernel::Point_2 &q, 
int); 

/*! 
introduces an iso-oriented rectangle `fo` whose 
minimal \f$ x\f$ coordinate is the one of `left`, the 
maximal \f$ x\f$ coordinate is the one of `right`, the 
minimal \f$ y\f$ coordinate is the one of `bottom`, the 
maximal \f$ y\f$ coordinate is the one of `top`. 
*/ 
Kernel::Iso_rectangle_2 
operator()(const Kernel::Point_2 &left, 
const Kernel::Point_2 &right, 
const Kernel::Point_2 &bottom, 
const Kernel::Point_2 &top); 


}; /* end Kernel::ConstructIsoRectangle_2 */


/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with one argument) 

\sa `Kernel::CartesianConstIterator_2` 

*/
class ConstructCartesianConstIterator_2 {
public:


/*! 
returns an iterator on the 0'th Cartesian coordinate of `p`. 
*/ 
Kernel::Cartesian_const_iterator_2 operator()(const Kernel::Point_2 
&p); 

/*! 
returns the past the end iterator of the Cartesian coordinates of `p`. 
*/ 
Kernel::Cartesian_const_iterator_2 operator()(const Kernel::Point_2 
&p, int); 

/*! 
returns an iterator on the 0'th Cartesian coordinate of `v`. 
*/ 
Kernel::Cartesian_const_iterator_2 operator()(const Kernel::Vector_2 
&v); 

/*! 
returns the past the end iterator of the Cartesian coordinates of `v`. 
*/ 
Kernel::Cartesian_const_iterator_2 operator()(const Kernel::Vector_2 
&v, int); 


}; /* end Kernel::ConstructCartesianConstIterator_2 */



/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with three arguments) 

\sa `CGAL::normal` 
\sa `CGAL::unit_normal` 

*/
class ConstructNormal_3 {
public:


/*! 
computes the normal of the vectors`q-p` and `r-p`. 
*/ 
Kernel::Vector_3 operator()(const Kernel::Point_3& p, 
const Kernel::Point_3& q, 
const Kernel::Point_3& r ); 


}; /* end Kernel::ConstructNormal_3 */

/*!
\ingroup PkgKernel23ConceptsFunctionObjects
\cgalconcept

A model for this must provide: 

\refines ::AdaptableFunctor (with two arguments) 

\sa `CGAL::Plane_3<Kernel>` 

*/
class ConstructPerpendicularPlane_3 {
public:

/*! 
returns the plane perpendicular to \f$ l\f$ passing through \f$ p\f$, 
such that the normal direction of the plane coincides with the direction of 
the line. 
*/ 
Kernel::Plane_3 operator()(const Kernel::Line_3& l, 
const Kernel::Point_3& p); 

}; /* end Kernel::ConstructPerpendicularPlane_3 */

}

/*!
\ingroup PkgKernel23Concepts
\cgalconcept

The concept of a <I>kernel</I> is defined by a set of requirements on 
the provision of certain types and access member functions to create 
objects of these types. The types are function object classes to be used 
within the algorithms and data structures of \cgal. 
This allows you to use any model of a kernel as a traits class in 
the \cgal algorithms and data structures, unless they require types 
beyond those provided by a kernel. 

A kernel provides types, construction objects, and generalized predicates. 
The former replace constructors of the kernel classes and constructive 
procedures in the kernel. There are also function objects replacing operators, 
especially for equality testing. 

\hasModel `CGAL::Cartesian<FieldNumberType>` 
\hasModel `CGAL::Homogeneous<RingNumberType>`
\hasModel `CGAL::Simple_cartesian<FieldNumberType>` 
\hasModel `CGAL::Simple_homogeneous<RingNumberType>` 
\hasModel `CGAL::Filtered_kernel<CK>`
\hasModel `CGAL::Exact_predicates_exact_constructions_kernel` 
\hasModel `CGAL::Exact_predicates_exact_constructions_kernel_with_sqrt` 
\hasModel `CGAL::Exact_predicates_inexact_constructions_kernel`

\sa `Kernel_d` 

*/
class Kernel {
public:


/// \name Types 
/// The following types describe the return types of predicates. They
/// typically map to `bool` and \cgal kernel enum types, except when
/// an interval arithmetic number type is used such as within the
/// filtering kernels, in which case it is `Uncertain<bool>` or
/// similar.
/// @{

/*! 
a model of `FieldNumberType` 
*/ 
typedef Hidden_type FT; 

/*! 
a model of `RingNumberType` 
*/ 
typedef Hidden_type RT; 

/*! 
`bool` or `Uncertain<bool>` 
*/ 
typedef Hidden_type Boolean; 

/*! 
`CGAL::Sign` or `Uncertain<CGAL::Sign>` 
*/ 
typedef Hidden_type Sign; 

/*! 
`CGAL::Comparison_result` or `Uncertain<CGAL::Comparison_result>` 
*/ 
typedef Hidden_type Comparison_result; 

/*! 
`CGAL::Orientation` or `Uncertain<CGAL::Orientation>` 
*/ 
typedef Hidden_type Orientation; 

/*! 
`CGAL::Oriented_side` or `Uncertain<CGAL::Oriented_side>` 
*/ 
typedef Hidden_type Oriented_side; 

/*! 
`CGAL::Bounded_side` or `Uncertain<CGAL::Bounded_side>` 
*/ 
typedef Hidden_type Bounded_side; 

/*! 
`CGAL::Angle` or `Uncertain<CGAL::Angle>` 
*/ 
typedef Hidden_type Angle; 

/// @} 

/// \name Constants 
/// @{

/*! 
A Boolean value indicating whether the predicates are filtered (as in
`Filtered_kernel`).  This helps propagating such decisions to traits
classes which are built on top of a kernel, so that they can decide to
filter their own predicates or not.
*/ 
static const bool Has_filtered_predicates; 

/// @} 

/// \name Coordinate Access 
/// @{

/*! 
a model of `Kernel::CartesianConstIterator_2` 
*/ 
typedef Hidden_type Cartesian_const_iterator_2; 

/// @} 

/// \name Geometric Objects 
/// @{

/*! 
a model of `Kernel::Point_2` 
*/ 
typedef Hidden_type Point_2; 

/*! 
a model of `Kernel::Vector_2` 
*/ 
typedef Hidden_type Vector_2; 

/*! 
a model of `Kernel::Direction_2` 
*/ 
typedef Hidden_type Direction_2; 

/*! 
a model of `Kernel::Line_2` 
*/ 
typedef Hidden_type Line_2; 

/*! 
a model of `Kernel::Ray_2` 
*/ 
typedef Hidden_type Ray_2; 

/*! 
a model of `Kernel::Segment_2` 
*/ 
typedef Hidden_type Segment_2; 

/*! 
a model of `Kernel::Triangle_2` 
*/ 
typedef Hidden_type Triangle_2; 

/*! 
a model of `Kernel::IsoRectangle_2` 
*/ 
typedef Hidden_type Iso_rectangle_2; 

/*! 
a model of `Kernel::Circle_2` 
*/ 
typedef Hidden_type Circle_2; 

/*! 
a model of `Kernel::Object_2` 
*/ 
typedef Hidden_type Object_2; 

/// @} 

/// \name Constructions 
/// @{

/*! 
a model of `Kernel::ConstructPoint_2` 
*/ 
typedef Hidden_type Construct_point_2; 

/*! 
a model of `Kernel::ConstructVector_2` 
*/ 
typedef Hidden_type Construct_vector_2; 

/*! 
a model of `Kernel::ConstructDirection_2` 
*/ 
typedef Hidden_type Construct_direction_2; 

/*! 
a model of `Kernel::ConstructSegment_2` 
*/ 
typedef Hidden_type Construct_segment_2; 

/*! 
a model of `Kernel::ConstructLine_2` 
*/ 
typedef Hidden_type Construct_line_2; 

/*! 
a model of `Kernel::ConstructRay_2` 
*/ 
typedef Hidden_type Construct_ray_2; 

/*! 
a model of `Kernel::ConstructCircle_2` 
*/ 
typedef Hidden_type Construct_circle_2; 

/*! 
a model of `Kernel::ConstructTriangle_2` 
*/ 
typedef Hidden_type Construct_triangle_2; 

/*! 
a model of `Kernel::ConstructIsoRectangle_2` 
*/ 
typedef Hidden_type Construct_iso_rectangle_2; 

/*! 
a model of `Kernel::ConstructObject_2` 
*/ 
typedef Hidden_type Construct_object_2; 

/*! 
a model of `Kernel::ConstructScaledVector_2` 
*/ 
typedef Hidden_type Construct_scaled_vector_2; 

/*! 
a model of `Kernel::ConstructTranslatedPoint_2` 
*/ 
typedef Hidden_type Construct_translated_point_2; 

/*! 
a model of `Kernel::ConstructPointOn_2` 
*/ 
typedef Hidden_type Construct_point_on_2; 

/*! 
a model of `Kernel::ConstructProjectedPoint_2` 
*/ 
typedef Hidden_type Construct_projected_point_2; 

/*! 
a model of `Kernel::ConstructProjectedXYPoint_2` 
*/ 
typedef Hidden_type Construct_projected_xy_point_2; 

/*! 
a model of `Kernel::ConstructCartesianConstIterator_2` 
*/ 
typedef Hidden_type Construct_cartesian_const_iterator_2; 

/*! 
a model of `Kernel::ConstructVertex_2` 
*/ 
typedef Hidden_type Construct_vertex_2; 

/*! 
a model of `Kernel::ConstructBbox_2` 
*/ 
typedef Hidden_type Construct_bbox_2; 

/*! 
a model of `Kernel::ConstructPerpendicularVector_2` 
*/ 
typedef Hidden_type Construct_perpendicular_vector_2; 

/*! 
a model of `Kernel::ConstructPerpendicularDirection_2` 
*/ 
typedef Hidden_type Construct_perpendicular_direction_2; 

/*! 
a model of `Kernel::ConstructPerpendicularLine_2` 
*/ 
typedef Hidden_type Construct_perpendicular_line_2; 

/*! 
a model of `Kernel::ConstructMaxVertex_2` 
*/ 
typedef Hidden_type Construct_max_vertex_2; 

/*! 
a model of `Kernel::ConstructMidpoint_2` 
*/ 
typedef Hidden_type Construct_midpoint_2; 

/*! 
a model of `Kernel::ConstructEquidistantLine_3` 
*/ 
typedef Hidden_type Construct_equidistant_line_3; 

/*! 
a model of `Kernel::ConstructMinVertex_2` 
*/ 
typedef Hidden_type Construct_min_vertex_2; 

/*! 
a model of `Kernel::ConstructCenter_2` 
*/ 
typedef Hidden_type Construct_center_2; 

/*! 
a model of `Kernel::ConstructCentroid_2` 
*/ 
typedef Hidden_type Construct_centroid_2; 

/*! 
a model of `Kernel::ConstructCircumcenter_2` 
*/ 
typedef Hidden_type Construct_circumcenter_2; 

/*! 
a model of `Kernel::ConstructBisector_2` 
*/ 
typedef Hidden_type Construct_bisector_2; 

/*! 
a model of `Kernel::ConstructOppositeDirection_2` 
*/ 
typedef Hidden_type Construct_opposite_direction_2; 

/*! 
a model of `Kernel::ConstructOppositeSegment_2` 
*/ 
typedef Hidden_type Construct_opposite_segment_2; 

/*! 
a model of `Kernel::ConstructOppositeRay_2` 
*/ 
typedef Hidden_type Construct_opposite_ray_2; 

/*! 
a model of `Kernel::ConstructOppositeLine_2` 
*/ 
typedef Hidden_type Construct_opposite_line_2; 

/*! 
a model of `Kernel::ConstructOppositeTriangle_2` 
*/ 
typedef Hidden_type Construct_opposite_triangle_2; 

/*! 
a model of `Kernel::ConstructOppositeCircle_2` 
*/ 
typedef Hidden_type Construct_opposite_circle_2; 

/*! 
a model of `Kernel::ConstructOppositeVector_2` 
*/ 
typedef Hidden_type Construct_opposite_vector_2; 

/*! 
a model of `Kernel::Intersect_2` 
*/ 
typedef Hidden_type Intersect_2; 

/*! 
a model of `Kernel::Assign_2` 
*/ 
typedef Hidden_type Assign_2; 

/*! 
a model of `Kernel::ComputeSquaredDistance_2` 
*/ 
typedef Hidden_type Compute_squared_distance_2; 

/*! 
a model of `Kernel::ComputeSquaredLength_2` 
*/ 
typedef Hidden_type Compute_squared_length_2; 

/*! 
a model of `Kernel::ComputeSquaredRadius_2` 
*/ 
typedef Hidden_type Compute_squared_radius_2; 

/*! 
a model of `Kernel::ComputeArea_2` 
*/ 
typedef Hidden_type Compute_area_2; 

/*! 
a model of `Kernel::ComputeDeterminant_2` 
*/ 
typedef Hidden_type Compute_determinant_2; 

/// @} 

/// \name Generalized Predicates 
/// @{

/*! 
a model of `Kernel::Angle_2` 
*/ 
typedef Hidden_type Angle_2; 

/*! 
a model of `Kernel::Equal_2` 
*/ 
typedef Hidden_type Equal_2; 

/*! 
a model of `Kernel::EqualX_2` 
*/ 
typedef Hidden_type Equal_x_2; 

/*! 
a model of `Kernel::EqualY_2` 
*/ 
typedef Hidden_type Equal_y_2; 

/*! 
a model of `Kernel::LessX_2` 
*/ 
typedef Hidden_type Less_x_2; 

/*! 
a model of `Kernel::LessY_2` 
*/ 
typedef Hidden_type Less_y_2; 

/*! 
a model of `Kernel::LessXY_2` 
*/ 
typedef Hidden_type Less_xy_2; 

/*! 
a model of `Kernel::LessYX_2` 
*/ 
typedef Hidden_type Less_yx_2; 

/*! 
a model of `Kernel::CompareX_2` 
*/ 
typedef Hidden_type Compare_x_2; 

/*! 
a model of `Kernel::CompareXAtY_2` 
*/ 
typedef Hidden_type Compare_x_at_y_2; 

/*! 
a model of `Kernel::CompareY_2` 
*/ 
typedef Hidden_type Compare_y_2; 

/*! 
a model of `Kernel::CompareXY_2` 
*/ 
typedef Hidden_type Compare_xy_2; 

/*! 
a model of `Kernel::CompareYX_2` 
*/ 
typedef Hidden_type Compare_yx_2; 

/*! 
a model of `Kernel::CompareYAtX_2` 
*/ 
typedef Hidden_type Compare_y_at_x_2; 

/*! 
a model of `Kernel::CompareDistance_2` 
*/ 
typedef Hidden_type Compare_distance_2; 

/*! 
a model of `Kernel::CompareAngleWithXAxis_2` 
*/ 
typedef Hidden_type Compare_angle_with_x_axis_2; 

/*! 
a model of `Kernel::CompareSlope_2` 
*/ 
typedef Hidden_type Compare_slope_2; 

/*! 
a model of `Kernel::LessDistanceToPoint_2` 
*/ 
typedef Hidden_type Less_distance_to_point_2; 

/*! 
a model of `Kernel::LessSignedDistanceToLine_2` 
*/ 
typedef Hidden_type Less_signed_distance_to_line_2; 

/*! 
a model of `Kernel::LessRotateCCW_2` 
*/ 
typedef Hidden_type Less_rotate_ccw_2; 

/*! 
a model of `Kernel::LeftTurn_2` 
*/ 
typedef Hidden_type Left_turn_2; 

/*! 
a model of `Kernel::Collinear_2` 
*/ 
typedef Hidden_type Collinear_2; 

/*! 
a model of `Kernel::Orientation_2` 
*/ 
typedef Hidden_type Orientation_2; 

/*! 
a model of `Kernel::SideOfOrientedCircle_2` 
*/ 
typedef Hidden_type Side_of_oriented_circle_2; 

/*! 
a model of `Kernel::SideOfBoundedCircle_2` 
*/ 
typedef Hidden_type Side_of_bounded_circle_2; 

/*! 
a model of `Kernel::IsHorizontal_2` 
*/ 
typedef Hidden_type Is_horizontal_2; 

/*! 
a model of `Kernel::IsVertical_2` 
*/ 
typedef Hidden_type Is_vertical_2; 

/*! 
a model of `Kernel::IsDegenerate_2` 
*/ 
typedef Hidden_type Is_degenerate_2; 

/*! 
a model of `Kernel::HasOn_2` 
*/ 
typedef Hidden_type Has_on_2; 

/*! 
a model of `Kernel::CollinearHasOn_2` 
*/ 
typedef Hidden_type Collinear_has_on_2; 

/*! 
a model of `Kernel::HasOnBoundedSide_2` 
*/ 
typedef Hidden_type Has_on_bounded_side_2; 

/*! 
a model of `Kernel::HasOnUnboundedSide_2` 
*/ 
typedef Hidden_type Has_on_unbounded_side_2; 

/*! 
a model of `Kernel::HasOnBoundary_2` 
*/ 
typedef Hidden_type Has_on_boundary_2; 

/*! 
a model of `Kernel::HasOnPositiveSide_2` 
*/ 
typedef Hidden_type Has_on_positive_side_2; 

/*! 
a model of `Kernel::HasOnNegativeSide_2` 
*/ 
typedef Hidden_type Has_on_negative_side_2; 

/*! 
a model of `Kernel::OrientedSide_2` 
*/ 
typedef Hidden_type Oriented_side_2; 

/*! 
a model of `Kernel::BoundedSide_2` 
*/ 
typedef Hidden_type Bounded_side_2; 

/*! 
a model of `Kernel::AreParallel_2` 
*/ 
typedef Hidden_type Are_parallel_2 ; 

/*! 
a model of `Kernel::AreOrderedAlongLine_2` 
*/ 
typedef Hidden_type Are_ordered_along_line_2 ; 

/*! 
a model of `Kernel::AreStrictlyOrderedAlongLine_2` 
*/ 
typedef Hidden_type Are_strictly_ordered_along_line_2; 

/*! 
a model of `Kernel::CollinearAreOrderedAlongLine_2` 
*/ 
typedef Hidden_type Collinear_are_ordered_along_line_2; 

/*! 
a model of `Kernel::CollinearAreStrictlyOrderedAlongLine_2` 
*/ 
typedef Hidden_type Collinear_are_strictly_ordered_along_line_2; 

/*! 
a model of `Kernel::CounterclockwiseInBetween_2` 
*/ 
typedef Hidden_type Counterclockwise_in_between_2; 

/*! 
a model of `Kernel::DoIntersect_2` 
*/ 
typedef Hidden_type Do_intersect_2; 

/// @} 

/// \name Coordinate Access 
/// @{

/*! 
a model of `Kernel::CartesianConstIterator_3` 
*/ 
typedef Hidden_type Cartesian_const_iterator_3; 

/// @} 

/// \name Geometric Objects 
/// @{

/*! 
a model of `Kernel::Point_3` 
*/ 
typedef Hidden_type Point_3; 

/*! 
a model of `Kernel::Vector_3` 
*/ 
typedef Hidden_type Vector_3; 

/*! 
a model of `Kernel::Direction_3` 
*/ 
typedef Hidden_type Direction_3; 

/*! 
a model of `Kernel::IsoCuboid_3` 
*/ 
typedef Hidden_type Iso_cuboid_3; 

/*! 
a model of `Kernel::Line_3` 
*/ 
typedef Hidden_type Line_3; 

/*! 
a model of `Kernel::Ray_3` 
*/ 
typedef Hidden_type Ray_3; 

/*! 
a model of `Kernel::Circle_3` 
*/ 
typedef Hidden_type Circle_3; 

/*! 
a model of `Kernel::Sphere_3` 
*/ 
typedef Hidden_type Sphere_3; 

/*! 
a model of `Kernel::Segment_3` 
*/ 
typedef Hidden_type Segment_3; 

/*! 
a model of `Kernel::Plane_3` 
*/ 
typedef Hidden_type Plane_3; 

/*! 
a model of `Kernel::Triangle_3` 
*/ 
typedef Hidden_type Triangle_3; 

/*! 
a model of `Kernel::Tetrahedron_3` 
*/ 
typedef Hidden_type Tetrahedron_3; 

/*! 
a model of `Kernel::Object_3` 
*/ 
typedef Hidden_type Object_3; 

/// @} 

/// \name Constructions 
/// @{

/*! 
a model of `Kernel::ConstructPoint_3` 
*/ 
typedef Hidden_type Construct_point_3; 

/*! 
a model of `Kernel::ConstructVector_3` 
*/ 
typedef Hidden_type Construct_vector_3; 

/*! 
a model of `Kernel::ConstructDirection_3` 
*/ 
typedef Hidden_type Construct_direction_3; 

/*! 
a model of `Kernel::ConstructPlane_3` 
*/ 
typedef Hidden_type Construct_plane_3; 

/*! 
a model of `Kernel::ConstructIsoCuboid_3` 
*/ 
typedef Hidden_type Construct_iso_cuboid_3; 

/*! 
a model of `Kernel::ConstructLine_3` 
*/ 
typedef Hidden_type Construct_line_3; 

/*! 
a model of `Kernel::ConstructRay_3` 
*/ 
typedef Hidden_type Construct_ray_3; 

/*! 
a model of `Kernel::ConstructSphere_3` 
*/ 
typedef Hidden_type Construct_sphere_3; 

/*! 
a model of `Kernel::ConstructSegment_3` 
*/ 
typedef Hidden_type Construct_segment_3; 

/*! 
a model of `Kernel::ConstructTriangle_3` 
*/ 
typedef Hidden_type Construct_triangle_3; 

/*! 
a model of `Kernel::ConstructTetrahedron_3` 
*/ 
typedef Hidden_type Construct_tetrahedron_3; 

/*! 
a model of `Kernel::ConstructObject_3` 
*/ 
typedef Hidden_type Construct_object_3; 

/*! 
a model of `Kernel::ConstructScaledVector_3` 
*/ 
typedef Hidden_type Construct_scaled_vector_3; 

/*! 
a model of `Kernel::ConstructTranslatedPoint_3` 
*/ 
typedef Hidden_type Construct_translated_point_3; 

/*! 
a model of `Kernel::ConstructPointOn_3` 
*/ 
typedef Hidden_type Construct_point_on_3; 

/*! 
a model of `Kernel::ConstructProjectedPoint_3` 
*/ 
typedef Hidden_type Construct_projected_point_3; 

/*! 
a model of `Kernel::ConstructLiftedPoint_3` 
*/ 
typedef Hidden_type Construct_lifted_point_3; 

/*! 
a model of `Kernel::ConstructCartesianConstIterator_3` 
*/ 
typedef Hidden_type Construct_cartesian_const_iterator_3; 

/*! 
a model of `Kernel::ConstructVertex_3` 
*/ 
typedef Hidden_type Construct_vertex_3; 

/*! 
a model of `Kernel::ConstructBbox_3` 
*/ 
typedef Hidden_type Construct_bbox_3; 

/*! 
a model of `Kernel::ConstructSupportingPlane_3` 
*/ 
typedef Hidden_type Construct_supporting_plane_3; 

/*! 
a model of `Kernel::ConstructOrthogonalVector_3` 
*/ 
typedef Hidden_type Construct_orthogonal_vector_3; 

/*! 
a model of `Kernel::ConstructBaseVector_3` 
*/ 
typedef Hidden_type Construct_base_vector_3; 

/*! 
a model of `Kernel::ConstructPerpendicularPlane_3` 
*/ 
typedef Hidden_type Construct_perpendicular_plane_3; 

/*! 
a model of `Kernel::ConstructRadicalPlane_3` 
*/ 
typedef Hidden_type Construct_radical_plane_3; 

/*! 
a model of `Kernel::ConstructPerpendicularLine_3` 
*/ 
typedef Hidden_type Construct_perpendicular_line_3; 

/*! 
a model of `Kernel::ConstructMidpoint_3` 
*/ 
typedef Hidden_type Construct_midpoint_3; 

/*! 
a model of `Kernel::ConstructCenter_3` 
*/ 
typedef Hidden_type Construct_center_3; 

/*! 
a model of `Kernel::ConstructCentroid_3` 
*/ 
typedef Hidden_type Construct_centroid_3; 

/*! 
a model of `Kernel::ConstructCircumcenter_3` 
*/ 
typedef Hidden_type Construct_circumcenter_3; 

/*! 
a model of `Kernel::ConstructBisector_3` 
*/ 
typedef Hidden_type Construct_bisector_3; 

/*! 
a model of `Kernel::ConstructCrossProductVector_3` 
*/ 
typedef Hidden_type Construct_cross_product_vector_3; 

/*! 
a model of `Kernel::ConstructOppositeDirection_3` 
*/ 
typedef Hidden_type Construct_opposite_direction_3; 

/*! 
a model of `Kernel::ConstructOppositeSegment_3` 
*/ 
typedef Hidden_type Construct_opposite_segment_3; 

/*! 
a model of `Kernel::ConstructOppositeRay_3` 
*/ 
typedef Hidden_type Construct_opposite_ray_3; 

/*! 
a model of `Kernel::ConstructOppositeLine_3` 
*/ 
typedef Hidden_type Construct_opposite_line_3; 

/*! 
a model of `Kernel::ConstructOppositePlane_3` 
*/ 
typedef Hidden_type Construct_opposite_plane_3; 

/*! 
a model of `Kernel::ConstructOppositeSphere_3` 
*/ 
typedef Hidden_type Construct_opposite_sphere_3; 

/*! 
a model of `Kernel::ConstructOppositeVector_3` 
*/ 
typedef Hidden_type Construct_opposite_vector_3; 

/*! 
a model of `Kernel::Intersect_3` 
*/ 
typedef Hidden_type Intersect_3; 

/*! 
a model of `Kernel::Assign_3` 
*/ 
typedef Hidden_type Assign_3; 

/*! 
a model of `Kernel::ComputeArea_3` 
*/ 
typedef Hidden_type Compute_area_3; 

/*! 
a model of `Kernel::ComputeSquaredArea_3` 
*/ 
typedef Hidden_type Compute_squared_area_3; 

/*! 
a model of `Kernel::ComputeAreaDividedByPi_3` 
*/ 
typedef Hidden_type Compute_area_divided_by_pi_3; 

/*! 
a model of `Kernel::ComputeApproximateArea_3` 
*/ 
typedef Hidden_type Compute_approximate_area_3; 

/*! 
a model of `Kernel::ComputeDeterminant_3` 
*/ 
typedef Hidden_type Compute_determinant_3; 

/*! 
a model of `Kernel::ComputeSquaredDistance_3` 
*/ 
typedef Hidden_type Compute_squared_distance_3; 

/*! 
a model of `Kernel::ComputeSquaredLength_3` 
*/ 
typedef Hidden_type Compute_squared_length_3; 

/*! 
a model of `Kernel::ComputeSquaredLengthDividedByPiSquare_3` 
*/ 
typedef Hidden_type Compute_squared_length_divided_by_pi_square_3; 

/*! 
a model of `Kernel::ComputeApproximateSquaredLength_3` 
*/ 
typedef Hidden_type Compute_approximate_squared_length_3; 

/*! 
a model of `Kernel::ComputeSquaredRadius_3` 
*/ 
typedef Hidden_type Compute_squared_radius_3; 

/*! 
a model of `Kernel::ComputeVolume_3` 
*/ 
typedef Hidden_type Compute_volume_3; 

/// @} 

/// \name Generalized Predicates 
/// @{

/*! 
a model of `Kernel::Angle_3` 
*/ 
typedef Hidden_type Angle_3; 

/*! 
a model of `Kernel::Equal_3` 
*/ 
typedef Hidden_type Equal_3; 

/*! 
a model of `Kernel::EqualX_3` 
*/ 
typedef Hidden_type Equal_x_3; 

/*! 
a model of `Kernel::EqualY_3` 
*/ 
typedef Hidden_type Equal_y_3; 

/*! 
a model of `Kernel::EqualZ_3` 
*/ 
typedef Hidden_type Equal_z_3; 

/*! 
a model of `Kernel::EqualXY_3` 
*/ 
typedef Hidden_type Equal_xy_3; 

/*! 
a model of `Kernel::LessX_3` 
*/ 
typedef Hidden_type Less_x_3; 

/*! 
a model of `Kernel::LessY_3` 
*/ 
typedef Hidden_type Less_y_3; 

/*! 
a model of `Kernel::LessZ_3` 
*/ 
typedef Hidden_type Less_z_3; 

/*! 
a model of `Kernel::LessXY_3` 
*/ 
typedef Hidden_type Less_xy_3; 

/*! 
a model of `Kernel::LessXYZ_3` 
*/ 
typedef Hidden_type Less_xyz_3; 

/*! 
a model of `Kernel::CompareX_3` 
*/ 
typedef Hidden_type Compare_x_3; 

/*! 
a model of `Kernel::CompareY_3` 
*/ 
typedef Hidden_type Compare_y_3; 

/*! 
a model of `Kernel::CompareZ_3` 
*/ 
typedef Hidden_type Compare_z_3; 

/*! 
a model of `Kernel::CompareXY_3` 
*/ 
typedef Hidden_type Compare_xy_3; 

/*! 
a model of `Kernel::CompareXYZ_3` 
*/ 
typedef Hidden_type Compare_xyz_3; 

/*! 
a model of `Kernel::LessSignedDistanceToPlane_3` 
*/ 
typedef Hidden_type Less_signed_distance_to_plane_3; 

/*! 
a model of `Kernel::LessDistanceToPoint_3` 
*/ 
typedef Hidden_type Less_distance_to_point_3; 

/*! 
a model of `Kernel::CompareDihedralAngle_3` 
*/ 
typedef Hidden_type Compare_dihedral_angle_3; 

/*! 
a model of `Kernel::CompareDistance_3` 
*/ 
typedef Hidden_type Compare_distance_3; 

/*! 
a model of `Kernel::Collinear_3` 
*/ 
typedef Hidden_type Collinear_3; 

/*! 
a model of `Kernel::Coplanar_3` 
*/ 
typedef Hidden_type Coplanar_3; 

/*! 
a model of `Kernel::Orientation_3` 
*/ 
typedef Hidden_type Orientation_3; 

/*! 
a model of `Kernel::CoplanarOrientation_3` 
*/ 
typedef Hidden_type Coplanar_orientation_3; 

/*! 
a model of `Kernel::CoplanarSideOfBoundedCircle_3` 
*/ 
typedef Hidden_type Coplanar_side_of_bounded_circle_3; 

/*! 
a model of `Kernel::SideOfOrientedSphere_3` 
*/ 
typedef Hidden_type Side_of_oriented_sphere_3; 

/*! 
a model of `Kernel::SideOfBoundedSphere_3` 
*/ 
typedef Hidden_type Side_of_bounded_sphere_3; 

/*! 
a model of `Kernel::IsDegenerate_3` 
*/ 
typedef Hidden_type Is_degenerate_3; 

/*! 
a model of `Kernel::HasOn_3` 
*/ 
typedef Hidden_type Has_on_3; 

/*! 
a model of `Kernel::HasOnBoundedSide_3` 
*/ 
typedef Hidden_type Has_on_bounded_side_3; 

/*! 
a model of `Kernel::HasOnUnboundedSide_3` 
*/ 
typedef Hidden_type Has_on_unbounded_side_3; 

/*! 
a model of `Kernel::HasOnBoundary_3` 
*/ 
typedef Hidden_type Has_on_boundary_3; 

/*! 
a model of `Kernel::HasOnPositiveSide_3` 
*/ 
typedef Hidden_type Has_on_positive_side_3; 

/*! 
a model of `Kernel::HasOnNegativeSide_3` 
*/ 
typedef Hidden_type Has_on_negative_side_3; 

/*! 
a model of `Kernel::OrientedSide_3` 
*/ 
typedef Hidden_type Oriented_side_3; 

/*! 
a model of `Kernel::BoundedSide_3` 
*/ 
typedef Hidden_type Bounded_side_3; 

/*! 
a model of `Kernel::AreParallel_3` 
*/ 
typedef Hidden_type Are_parallel_3 ; 

/*! 
a model of `Kernel::AreOrderedAlongLine_3` 
*/ 
typedef Hidden_type Are_ordered_along_line_3 ; 

/*! 
a model of `Kernel::AreStrictlyOrderedAlongLine_3` 
*/ 
typedef Hidden_type Are_strictly_ordered_along_line_3; 

/*! 
a model of `Kernel::CollinearAreOrderedAlongLine_3` 
*/ 
typedef Hidden_type Collinear_are_ordered_along_line_3; 

/*! 
a model of `Kernel::CollinearAreStrictlyOrderedAlongLine_3` 
*/ 
typedef Hidden_type Collinear_are_strictly_ordered_along_line_3; 

/*! 
a model of `Kernel::DoIntersect_3` 
*/ 
typedef Hidden_type Do_intersect_3; 

/// @} 

/// \name Operations 
/// For each of the function objects above, there must exist a member
/// function that requires no arguments and returns an instance of
/// that function object. The name of the member function is the
/// uncapitalized name of the type returned with the suffix `_object`
/// appended. For example, for the function object
/// `Kernel::Construct_vector_2` the following member function must
/// exist:

/// @{

/*! 

*/ 
Kernel::Construct_vector_2 construct_vector_2_object() const ; 

/// @}



/// @}

}; /* end Kernel */

