'use strict';

var Caml_builtin_exceptions = require("bs-platform/lib/js/caml_builtin_exceptions.js");

function encodeCompareHow(param) {
  return param;
}

function decodeCompareResult(param) {
  var switcher = param + 1 | 0;
  if (switcher > 2 || switcher < 0) {
    return /* Unknown */3;
  } else {
    return switcher;
  }
}

function decodeCompatMode(param) {
  switch (param) {
    case "BackCompat" : 
        return /* BackCompat */0;
    case "CSS1Compat" : 
        return /* CSS1Compat */1;
    default:
      return /* Unknown */2;
  }
}

function encodeContentEditable(param) {
  switch (param) {
    case 0 : 
        return "true";
    case 1 : 
        return "false";
    case 2 : 
        return "inherit";
    case 3 : 
        return "";
    
  }
}

function decodeContentEditable(param) {
  switch (param) {
    case "false" : 
        return /* False */1;
    case "inherit" : 
        return /* Inherit */2;
    case "true" : 
        return /* True */0;
    default:
      return /* Unknown */3;
  }
}

function decodeDeltaMode(param) {
  if (param > 2 || param < 0) {
    throw [
          Caml_builtin_exceptions.invalid_argument,
          "invalid deltaMode"
        ];
  } else {
    return param;
  }
}

function encodeDesignMode(param) {
  switch (param) {
    case 0 : 
        return "on";
    case 1 : 
        return "off";
    case 2 : 
        return "";
    
  }
}

function decodeDesignMode(param) {
  switch (param) {
    case "off" : 
        return /* Off */1;
    case "on" : 
        return /* On */0;
    default:
      return /* Unknown */2;
  }
}

function encodeDir(param) {
  switch (param) {
    case 0 : 
        return "ltr";
    case 1 : 
        return "rtl";
    case 2 : 
        return "";
    
  }
}

function decodeDir(param) {
  switch (param) {
    case "ltr" : 
        return /* Ltr */0;
    case "rtl" : 
        return /* Rtl */1;
    default:
      return /* Unknown */2;
  }
}

function decodeEventPhase(param) {
  if (param > 3 || param < 0) {
    return /* Unknown */4;
  } else {
    return param;
  }
}

function encodeFilterAction(param) {
  return param + 1 | 0;
}

function encodeInsertPosition(param) {
  switch (param) {
    case 0 : 
        return "beforebegin";
    case 1 : 
        return "afterbegin";
    case 2 : 
        return "beforeend";
    case 3 : 
        return "afterend";
    
  }
}

function encodeModifierKey(param) {
  switch (param) {
    case 0 : 
        return "Alt";
    case 1 : 
        return "AltGraph";
    case 2 : 
        return "CapsLock";
    case 3 : 
        return "Control";
    case 4 : 
        return "Fn";
    case 5 : 
        return "FnLock";
    case 6 : 
        return "Hyper";
    case 7 : 
        return "Meta";
    case 8 : 
        return "NumLock";
    case 9 : 
        return "ScrollLock";
    case 10 : 
        return "Shift";
    case 11 : 
        return "Super";
    case 12 : 
        return "Symbol";
    case 13 : 
        return "SymbolLock";
    
  }
}

function decodeNodeType(param) {
  var switcher = param - 1 | 0;
  if (switcher > 11 || switcher < 0) {
    return /* Unknown */12;
  } else {
    return switcher;
  }
}

function decodePointerType(param) {
  switch (param) {
    case "mouse" : 
        return /* Mouse */0;
    case "pen" : 
        return /* Pen */1;
    case "touch|" : 
        return /* Touch */2;
    default:
      return /* Unknown */3;
  }
}

function decodeReadyState(param) {
  switch (param) {
    case "complete" : 
        return /* Complete */2;
    case "interactive" : 
        return /* Interactive */1;
    case "loading" : 
        return /* Loading */0;
    default:
      return /* Unknown */3;
  }
}

function decodeShadowRootMode(param) {
  switch (param) {
    case "closed" : 
        return /* Closed */1;
    case "open" : 
        return /* Open */0;
    default:
      throw [
            Caml_builtin_exceptions.invalid_argument,
            "Unknown shadowRootMode"
          ];
  }
}

function decodeVisibilityState(param) {
  switch (param) {
    case "hidden" : 
        return /* Hidden */1;
    case "prerender" : 
        return /* Prerender */2;
    case "unloaded" : 
        return /* Unloaded */3;
    case "visible" : 
        return /* Visible */0;
    default:
      return /* Unknown */4;
  }
}

function many(param) {
  if (param) {
    return param[0] | many(param[1]);
  } else {
    return 0;
  }
}

var WhatToShow = /* module */[
  /* _All */-1,
  /* _Element */1,
  /* _Attribute */2,
  /* _Text */4,
  /* _CDATASection */8,
  /* _EntityReference */16,
  /* _Entity */32,
  /* _ProcessingInstruction */64,
  /* _Comment */128,
  /* _Document */256,
  /* _DocumentType */512,
  /* _DocumentFragment */1024,
  /* _Notation */2048,
  /* many */many
];

exports.encodeCompareHow = encodeCompareHow;
exports.decodeCompareResult = decodeCompareResult;
exports.decodeCompatMode = decodeCompatMode;
exports.encodeContentEditable = encodeContentEditable;
exports.decodeContentEditable = decodeContentEditable;
exports.decodeDeltaMode = decodeDeltaMode;
exports.encodeDesignMode = encodeDesignMode;
exports.decodeDesignMode = decodeDesignMode;
exports.encodeDir = encodeDir;
exports.decodeDir = decodeDir;
exports.decodeEventPhase = decodeEventPhase;
exports.encodeFilterAction = encodeFilterAction;
exports.encodeInsertPosition = encodeInsertPosition;
exports.encodeModifierKey = encodeModifierKey;
exports.decodeNodeType = decodeNodeType;
exports.decodePointerType = decodePointerType;
exports.decodeReadyState = decodeReadyState;
exports.decodeShadowRootMode = decodeShadowRootMode;
exports.decodeVisibilityState = decodeVisibilityState;
exports.WhatToShow = WhatToShow;
/* No side effect */
