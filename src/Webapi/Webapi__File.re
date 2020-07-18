type t = Fetch.file;

[@text "{1 Blob superclass}"];

include Webapi__Blob.Impl({type nonrec t = t});

[@text "{1 File class}"];

/** @since 0.18.0 */
[@bs.get] external lastModified: t => float = "";

// [@bs.new] external make: ... = "File";

[@bs.get] external name: t => string = "";

[@bs.get] external preview: t => string = "";
