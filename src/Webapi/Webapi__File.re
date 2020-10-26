type t = Fetch.file;

[@text "{1 Blob superclass}"];

include Webapi__Blob.Impl({type nonrec t = t});

[@text "{1 File class}"];

/** @since 0.18.0 */
[@bs.get] external lastModified: t => float = "lastModified";

// [@bs.new] external make: ... = "File";

[@bs.get] external name: t => string = "name";

[@bs.get] external preview: t => string = "preview";
