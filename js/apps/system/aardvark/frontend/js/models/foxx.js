/*global window, Backbone */
(function() {
  "use strict";

  window.Foxx = Backbone.Model.extend({
    idAttribute: '_key',

    defaults: {
      "author": "Unknown Author",
      "title": "",
      "version": "Unknown Version",
      "mount": "",
      "description": "No description",
      "license": "Unknown License",
      "contributors": [],
      "git": "",
      "isSystem": false,
      "development": false
    },

    url: function() {
      if (this.get("_key")) {
        return "/_admin/aardvark/foxxes/" + this.get("_key");
      }
      return "/_admin/aardvark/foxxes/install";
    },

    isNew: function() {
      return false;
    }
  });
}());
