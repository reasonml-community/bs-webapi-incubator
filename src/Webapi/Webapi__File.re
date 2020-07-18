type t = Fetch.file;

include Webapi__Blob.Impl({type nonrec t = t});

[@bs.get] external lastModified: t => float = "";

// [@bs.new] external make: ... = "File";

[@bs.get] external name: t => string = "";

[@bs.get] external preview: t => string = "";
