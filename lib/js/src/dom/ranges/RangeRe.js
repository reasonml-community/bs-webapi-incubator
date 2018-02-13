'use strict';

var DomTypesRe = require("../DomTypesRe.js");

function compareBoundaryPoint(how, range, self) {
  return DomTypesRe.decodeCompareResult(self.compareBoundaryPoints(DomTypesRe.encodeCompareHow(how), range));
}

function comparePoint(node, offset, self) {
  return DomTypesRe.decodeCompareResult(self.comparePoint(node, offset));
}

exports.compareBoundaryPoint = compareBoundaryPoint;
exports.comparePoint = comparePoint;
/* No side effect */
