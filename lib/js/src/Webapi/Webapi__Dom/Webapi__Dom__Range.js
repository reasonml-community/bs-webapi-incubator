'use strict';

var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");

function compareBoundaryPoint(how, range, self) {
  return Webapi__Dom__Types.decodeCompareResult(self.compareBoundaryPoints(Webapi__Dom__Types.encodeCompareHow(how), range));
}

function comparePoint(node, offset, self) {
  return Webapi__Dom__Types.decodeCompareResult(self.comparePoint(node, offset));
}

exports.compareBoundaryPoint = compareBoundaryPoint;
exports.comparePoint = comparePoint;
/* No side effect */
